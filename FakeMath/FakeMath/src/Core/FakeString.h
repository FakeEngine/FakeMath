/*
 * \file  FakeString.h
 * \brief The internal String class, used by the FakeEngine.
 *
 * \author Can Karka
 * \date   March 2021
 *
 * Copyright (C) 2021 Can Karka
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FAKE_STRING_H
#define FAKE_STRING_H

#include <string>
#include <cstring>
#include <sstream>
#include <vector>

#include "FakeCore.h"

 /**
  *
  * This class represents the String class of the FakeEngine.
  * All Strings will be null terminated automatically if you use this class.
  *
  */
class FakeString
	{
	private:
		char *Data = 0;				/** . */
		uint32 Size = 0;			/** . */

	public:
		static const uint32 NPOS;	/** . */

		/**
		 *
		 * .
		 *
		 */
		FakeString() = default;

		/**
		 *
		 * .
		 *
		 * @param data
		 */
		FakeString(const char *data);

		/**
		 *
		 * .
		 *
		 * @param data
		 */
		FakeString(const wchar_t *data);

		/**
		 *
		 * .
		 *
		 * @param str
		 */
		FakeString(const std::string &str);

		/**
		 *
		 * .
		 *
		 * @param wideStr
		 */
		FakeString(const std::wstring &wideStr);

		/**
		 *
		 * .
		 *
		 * @param other
		 */
		FakeString(const FakeString &other);

		/**
		 *
		 * .
		 *
		 * @param other
		 * @param length
		 */
		FakeString(const FakeString &other, uint32 length);

		/**
		 *
		 * .
		 *
		 * @param other
		 * @param start
		 * @param end
		 */
		FakeString(const FakeString &other, uint32 start, uint32 end);

		/**
		 *
		 * .
		 *
		 * @param other
		 */
		FakeString(FakeString &&other) noexcept;

		/**
		 *
		 * .
		 *
		 */
		~FakeString();

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		FakeString &operator=(const FakeString &other);

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		FakeString &operator=(FakeString &&other) noexcept;

		/**
		 *
		 * .
		 *
		 * @param size
		 */
		void Resize(int64 size);

		/**
		 *
		 * .
		 *
		 */
		void Clear();

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		uint32 Length() const;

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		wchar_t *W_Str();

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		const wchar_t *W_Str() const;

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		char *C_Str();

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		const char *C_Str() const;

		/**
		 *
		 * .
		 *
		 * @param index
		 * @return Returns
		 */
		char At(uint32 index);

		/**
		 *
		 * .
		 *
		 * @param index
		 * @return Returns
		 */
		const char At(uint32 index) const;

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @return Returns
		 */
		FakeString &Append(const char letter);

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		FakeString &Append(const FakeString &other);

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @return Returns
		 */
		FakeString &Remove(const char letter);

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		FakeString &Remove(const FakeString &other);

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @param offset
		 * @return Returns
		 */
		uint32 FirstIndexOf(const char letter, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @param offset
		 * @return Returns
		 */
		uint32 FirstIndexOf(const FakeString &other, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @param offset
		 * @return Returns
		 */
		uint32 IndexOf(const char letter, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @param offset
		 * @return Returns
		 */
		uint32 IndexOf(const FakeString &other, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @param offset
		 * @return Returns
		 */
		uint32 LastIndexOf(const char letter, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @param offset
		 * @return Returns
		 */
		uint32 LastIndexOf(const FakeString &other, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @param offset
		 * @return Returns
		 */
		uint32 FirstIndexNotOf(const char letter, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @param offset
		 * @return Returns
		 */
		uint32 FirstIndexNotOf(const FakeString &other, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param delimiter
		 * @return Returns
		 */
		std::vector<FakeString> Split(char delimiter);

		/**
		 *
		 * .
		 *
		 * @param delimiter
		 * @param outWordCount
		 * @return Returns
		 */
		FakeString *Split(char delimiter, uint32 *outWordCount);

		/**
		 *
		 * .
		 *
		 * @param find
		 * @param replaceValue
		 * @param occurencesToReplace
		 * @return Returns
		 */
		FakeString &Replace(const FakeString &find, const FakeString &replaceValue, uint32 occurencesToReplace = 0);

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		FakeString &Reverse();

		/**
		 *
		 * .
		 *
		 * @param beginIndex
		 * @param endIndex
		 * @return Returns
		 */
		FakeString Substr(uint32 beginIndex, uint32 endIndex = 0) const;

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		const FakeString &ToLower() const;

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		const FakeString &ToUpper() const;

		/**
		 *
		 * .
		 *
		 */
		void Print() const;

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		bool IsEmpty() const;

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @param other
		 * @return Returns
		 */
		bool Contains(const char letter, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @param offset
		 * @return Returns
		 */
		bool Contains(const FakeString &other, uint32 offset = 0) const;

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @return Returns
		 */
		bool StartsWith(const char letter) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool StartsWith(const FakeString &other) const;

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @return Returns
		 */
		bool EndsWith(const char letter) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool EndsWith(const FakeString &other) const;

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		char *operator*();

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		const char *operator*() const;

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		operator char *();

		/**
		 *
		 * .
		 *
		 * @return Returns
		 */
		operator const char *() const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator==(const char *other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator==(const FakeString &other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator!=(const char *other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator!=(const FakeString &other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator<(const char *other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator<(const FakeString &other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator>(const char *other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator>(const FakeString &other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator<=(const char *other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator<=(const FakeString &other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator>=(const char *other) const;

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		bool operator>=(const FakeString &other) const;

		/**
		 *
		 * .
		 *
		 * @param str
		 * @param other
		 * @return Returns
		 */
		friend FakeString operator-(FakeString str, const FakeString &other);

		/**
		 *
		 * .
		 *
		 * @param str
		 * @param letter
		 * @return Returns
		 */
		friend FakeString operator-(FakeString str, const char letter);

		/**
		 *
		 * .
		 *
		 * @param str
		 * @param other
		 * @return Returns
		 */
		friend FakeString operator-(FakeString str, const char *other);

		/**
		 *
		 * .
		 *
		 * @param str
		 * @param other
		 * @return Returns
		 */
		friend FakeString operator+(FakeString str, const FakeString &other);

		/**
		 *
		 * .
		 *
		 * @param str
		 * @param letter
		 * @return Returns
		 */
		friend FakeString operator+(FakeString str, const char letter);

		/**
		 *
		 * .
		 *
		 * @param str
		 * @param other
		 * @return Returns
		 */
		friend FakeString operator+(FakeString str, const char *other);

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		FakeString &operator-=(const FakeString &other);

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @return Returns
		 */
		FakeString &operator-=(const char letter);

		/**
		 *
		 * .
		 *
		 * @param other
		 * @return Returns
		 */
		FakeString &operator+=(const FakeString &other);

		/**
		 *
		 * .
		 *
		 * @param letter
		 * @return Returns
		 */
		FakeString &operator+=(const char letter);

		/**
		 *
		 * .
		 *
		 * @param index
		 * @return Returns
		 */
		char &operator[](int32 index);

		/**
		 *
		 * .
		 *
		 * @param index
		 * @return Returns
		 */
		const char &operator[](int32 index) const;

		/**
		 *
		 * .
		 *
		 * @param stream
		 * @param str
		 * @return Returns
		 */
		friend std::ostream &operator<<(std::ostream &stream, const FakeString &str);

		/**
		 *
		 * .
		 *
		 * @param value
		 * @return Returns
		 */
		template<typename T>
		inline static FakeString ToString(const T &value)
			{
			std::stringstream ss;
			ss << value;
			return FakeString(ss.str());
			}

		/**
		 *
		 * .
		 *
		 * @param str
		 * @param value
		 * @return Returns
		 */
		template<typename T>
		inline friend FakeString &operator<<(FakeString &str, const T &value)
			{
			FakeString newStr = FakeString::ToString(value);
			return str.Append(newStr);
			}

		/**
		 *
		 * .
		 *
		 * @param str
		 * @param value
		 * @return Returns
		 */
		template<typename T>
		inline friend FakeString &operator>>(FakeString &str, const T &value)
			{
			FakeString newStr = FakeString::ToString(value);
			return str.Remove(newStr);
			}
	};

#endif

