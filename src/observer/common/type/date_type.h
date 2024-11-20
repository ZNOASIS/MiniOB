#pragma once

#include "common/type/data_type.h"

class DateType
{
public:
  Date() = default;
  Date(const char *str);
  Date(int data);
  // Date(int year,int month,int day);

  bool        is_valid() const { return valid; }
  bool        operator<(const Date &that) const;
  bool        operator==(const Date &that) const;
  int         compare(const Date &that) const;
  std::string to_string() const;
  int         to_int() const;
  void        parse_date_int(int date);
  bool        is_date_valid() const;
  bool        valid{};
  int         year{};
  int         month{};
  int         day{};
  std::string format(const std::string &format_str) const；
};