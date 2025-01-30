#pragma once
#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include "clsDate.h"

using namespace std;
class clsQueueLine
{
private:

	short _TotalTickets = 0;
	short _AverageServeTime = 0;
	string _Prefix = "";

	class clsTicket
	{
	private:
		short _Number = 0;
		string _Prefix;
		string _TicketTime;
		short _WaitingClients = 0;
		short _AverageServeTime = 0;
		short _ExpectedServeTime = 0;

	public:
		clsTicket (string Prefix, short number , short wattingClients, short averageServeTime)
		{
			_Number = number;
			_Prefix = Prefix;
			_TicketTime = clsDate::GetCurrentTimestamp() ;
			_WaitingClients = wattingClients;
			_AverageServeTime = averageServeTime;
		}

		string Prefix()
		{
			return _Prefix;
		}

		short Number()
		{
			return _Number;
		}

		string FullNumber()
		{
			return _Prefix + to_string(_Number);
		}

		string TicketTime()
		{
			return _TicketTime;
		}

		short WaitingClients()
		{
			return _WaitingClients;
		}

		short ExpectedServeTime()
		{
			return _AverageServeTime *  _WaitingClients;
		}

		void Print()
		{
			cout << "\n\t\t\t  _______________________\n";
			cout << "\n\t\t\t\t    " << FullNumber();
			cout << "\n\n\t\t\t    " << _TicketTime;
			cout << "\n\t\t\t    Wating Clients = " << _WaitingClients;
			cout << "\n\t\t\t      Serve Time In";
			cout << "\n\t\t\t       " << ExpectedServeTime() << " Minutes.";
			cout << "\n\t\t\t  _______________________\n";


		}
	};

public:

	queue<clsTicket> QueueLine;

	clsQueueLine(string prefix , short averageServeTime)
	{
		_AverageServeTime = averageServeTime;
		_TotalTickets = 0;
		_Prefix = prefix;
	}

	void IssueTicket()
	{
		_TotalTickets++;
		clsTicket Ticket(_Prefix, _TotalTickets, WaitingClients(), _AverageServeTime);
		QueueLine.push(Ticket);

	}

	short WaitingClients()
	{
		return (short)QueueLine.size();
	}

	string WhoIdNext()
	{
		if (QueueLine.empty())
		{
			return "No Client Left";
		}
		return QueueLine.front().FullNumber();
	}

	bool ServeNextClient()
	{
		if (QueueLine.empty())
		{
			return false;
		}
		QueueLine.pop();
		return true;
	}

	short ServedClients()
	{
		return _TotalTickets - WaitingClients();
	}

	void PrintInfo()
	{
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t    Prefix   = " << _Prefix;
		cout << "\n\t\t\t    Total Tickets   = " << _TotalTickets;
		cout << "\n\t\t\t    Served Clients  = " << ServedClients();
		cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
		cout << "\n\t\t\t _________________________\n";
		cout << "\n";

	}

	void PrintTicketsLineLTR()
	{
		if (QueueLine.empty())
		{
			cout << "\n\t\tTickets: No Tickets";
		}
		else
		{
			cout << "\n\t\tTickets: ";
		}

		queue <clsTicket> tempQueueLine = QueueLine;

		while (!tempQueueLine.empty())
		{
			clsTicket ticket = tempQueueLine.front();
			cout << " " << ticket.FullNumber() << "<--";
			tempQueueLine.pop();
		}

		cout << "\n";
	}

	void PrintTicketsLineRTL()
	{
		if (QueueLine.empty())
		{
			cout << "\n\t\tTickets: No Tickets";
		}
		else
		{
			cout << "\n\t\tTickets: ";
		}

		queue <clsTicket> tempQueueLine = QueueLine;
		stack <clsTicket> tempStackLine;

		while (!tempQueueLine.empty())
		{
			tempStackLine.push(tempQueueLine.front());
			tempQueueLine.pop();
		}

		while (!tempStackLine.empty())
		{
			clsTicket ticket = tempStackLine.top();
			cout << " " << ticket.FullNumber() << "-->";
			tempStackLine.pop();
		}

		cout << "\n";
	}

	void PrintAllTickets()
	{
		cout << "\n\n\t\t\t\t---Tickets---";

		if (QueueLine.empty())
		{
			cout << "\n\n\t\t\t\t---No Tickets---";
		}

		queue <clsTicket> tempQueueLine = QueueLine;

		while (!tempQueueLine.empty())
		{
			tempQueueLine.front().Print();
			tempQueueLine.pop();
		}
	}
};

