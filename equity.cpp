#include "curl.h"
#include "date.h"
#include "equity.h"
#include <iostream>
#include <map>
using namespace std;

Date Equity::GetStartDate() {
	return start_date;
}

Date Equity::GetEndDate() {
	return end_date;
}

Date ETF::GetStartDate() {
	return start_date;
}

Date ETF::GetEndDate() {
	return end_date;
}

Date Stock::GetRepDate() {
	return (*this).rep_date;
}

