#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind::TimeSpanParse_ParseFailureKind(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind::TimeSpanParse_ParseFailureKind()   {
}
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind  System::Globalization::TimeSpanParse_ParseFailureKind::None{static_cast<uint8_t>(0x0u)};
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind  System::Globalization::TimeSpanParse_ParseFailureKind::ArgumentNull{static_cast<uint8_t>(0x1u)};
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind  System::Globalization::TimeSpanParse_ParseFailureKind::Format{static_cast<uint8_t>(0x2u)};
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind  System::Globalization::TimeSpanParse_ParseFailureKind::FormatWithParameter{static_cast<uint8_t>(0x3u)};
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind  System::Globalization::TimeSpanParse_ParseFailureKind::Overflow{static_cast<uint8_t>(0x4u)};
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles::TimeSpanParse_TimeSpanStandardStyles(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles::TimeSpanParse_TimeSpanStandardStyles()   {
}
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  System::Globalization::TimeSpanParse_TimeSpanStandardStyles::None{static_cast<uint8_t>(0x0u)};
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  System::Globalization::TimeSpanParse_TimeSpanStandardStyles::Invariant{static_cast<uint8_t>(0x1u)};
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  System::Globalization::TimeSpanParse_TimeSpanStandardStyles::Localized{static_cast<uint8_t>(0x2u)};
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  System::Globalization::TimeSpanParse_TimeSpanStandardStyles::RequireFull{static_cast<uint8_t>(0x4u)};
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  System::Globalization::TimeSpanParse_TimeSpanStandardStyles::Any{static_cast<uint8_t>(0x3u)};
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TTT::TimeSpanParse_TTT(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TTT::TimeSpanParse_TTT()   {
}
constexpr ::System::Globalization::TimeSpanParse_TTT  System::Globalization::TimeSpanParse_TTT::None{static_cast<uint8_t>(0x0u)};
constexpr ::System::Globalization::TimeSpanParse_TTT  System::Globalization::TimeSpanParse_TTT::End{static_cast<uint8_t>(0x1u)};
constexpr ::System::Globalization::TimeSpanParse_TTT  System::Globalization::TimeSpanParse_TTT::Num{static_cast<uint8_t>(0x2u)};
constexpr ::System::Globalization::TimeSpanParse_TTT  System::Globalization::TimeSpanParse_TTT::Sep{static_cast<uint8_t>(0x3u)};
constexpr ::System::Globalization::TimeSpanParse_TTT  System::Globalization::TimeSpanParse_TTT::NumOverflow{static_cast<uint8_t>(0x4u)};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(::System::Globalization::TimeSpanParse_TTT)>(&::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816993b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::TimeSpanParse_TTT>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(int32_t)>(&::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816993e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(::System::Globalization::TimeSpanParse_TTT, int32_t, int32_t, ::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816993c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::TimeSpanParse_TTT>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken.IsInvalidFraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanToken::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanToken::IsInvalidFraction)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181699350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                        {"IsInvalidFraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(::System::Globalization::TimeSpanParse_TTT  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::TimeSpanParse_TTT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type);
}
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(int32_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, number);
}
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(::System::Globalization::TimeSpanParse_TTT  type, int32_t  number, int32_t  leadingZeroes, ::System::ReadOnlySpan_1<char16_t>  separator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::TimeSpanParse_TTT>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, number, leadingZeroes, separator);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanToken::IsInvalidFraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                        {"IsInvalidFraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_ttt", ty: "::System::Globalization::TimeSpanParse_TTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sep", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanToken::TimeSpanParse_TimeSpanToken(::System::Globalization::TimeSpanParse_TTT  _ttt, int32_t  _num, int32_t  _zeroes, ::System::ReadOnlySpan_1<char16_t>  _sep) noexcept  {
this->_ttt = _ttt;
this->_num = _num;
this->_zeroes = _zeroes;
this->_sep = _sep;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanToken::TimeSpanParse_TimeSpanToken()   {
}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816995f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180f9c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.GetNextToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanParse_TimeSpanToken (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanTokenizer::GetNextToken)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181699400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(),
                        {"GetNextToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input);
}
inline void System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t>  input, int32_t  startPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input, startPosition);
}
inline ::System::Globalization::TimeSpanParse_TimeSpanToken System::Globalization::TimeSpanParse_TimeSpanTokenizer::GetNextToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(),
                        {"GetNextToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanParse_TimeSpanToken>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanTokenizer::TimeSpanParse_TimeSpanTokenizer(::System::ReadOnlySpan_1<char16_t>  _value, int32_t  _pos) noexcept  {
this->_value = _value;
this->_pos = _pos;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanTokenizer::TimeSpanParse_TimeSpanTokenizer()   {
}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_PositiveInvariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveInvariant)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816990e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"get_PositiveInvariant", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_NegativeInvariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeInvariant)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181698fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"get_NegativeInvariant", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_PositiveLocalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveLocalized)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181699130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"get_PositiveLocalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_NegativeLocalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeLocalized)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181699040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"get_NegativeLocalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullAppCompatMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullAppCompatMatch)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181697c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullAppCompatMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.PartialAppCompatMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::PartialAppCompatMatch)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181698b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"PartialAppCompatMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullMatch)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181698830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDMatch)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816981f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullDMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMMatch)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181698300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullHMMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDHMMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMMatch)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181697e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullDHMMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMSMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSMatch)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181698670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullHMSMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDHMSMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMSMatch)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181697fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullDHMSMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMSFMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSFMatch)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181698460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullHMSFMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::DateTimeFormatInfo*)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::Init)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181698a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"Init", {}, {::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.ProcessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanToken>, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::ProcessToken)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181698ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"ProcessToken", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanToken>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.AddSep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddSep)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181697b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"AddSep", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.AddNum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanParse_TimeSpanToken, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddNum)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181697a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"AddNum", {}, {::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveInvariant()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"get_PositiveInvariant", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(*this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeInvariant()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"get_NegativeInvariant", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(*this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveLocalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"get_PositiveLocalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(*this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeLocalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"get_NegativeLocalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(*this, ___internal_method);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullAppCompatMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::PartialAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"PartialAppCompatMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullDMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullHMMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullDHMMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullHMSMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullDHMSMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSFMatch(::System::Globalization::TimeSpanFormat_FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"FullHMSFMatch", {}, {::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline void System::Globalization::TimeSpanParse_TimeSpanRawInfo::Init(::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"Init", {}, {::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dtfi);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::ProcessToken(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanToken>  tok, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"ProcessToken", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanToken>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, tok, result);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddSep(::System::ReadOnlySpan_1<char16_t>  sep, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"AddSep", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, sep, result);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddNum(::System::Globalization::TimeSpanParse_TimeSpanToken  num, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                        {"AddNum", {}, {::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, num, result);
}
// Ctor Parameters [CppParam { name: "_lastSeenTTT", ty: "::System::Globalization::TimeSpanParse_TTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tokenCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sepCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_posLoc", ty: "::System::Globalization::TimeSpanFormat_FormatLiterals", modifiers: "", def_value: Some("{}") }, CppParam { name: "_negLoc", ty: "::System::Globalization::TimeSpanFormat_FormatLiterals", modifiers: "", def_value: Some("{}") }, CppParam { name: "_posLocInit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_negLocInit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fullPosPattern", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fullNegPattern", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers0", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers1", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers2", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers3", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers4", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals0", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals1", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals2", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals3", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals4", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals5", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanRawInfo::TimeSpanParse_TimeSpanRawInfo(::System::Globalization::TimeSpanParse_TTT  _lastSeenTTT, int32_t  _tokenCount, int32_t  _sepCount, int32_t  _numCount, ::System::Globalization::TimeSpanFormat_FormatLiterals  _posLoc, ::System::Globalization::TimeSpanFormat_FormatLiterals  _negLoc, bool  _posLocInit, bool  _negLocInit, ::StringW  _fullPosPattern, ::StringW  _fullNegPattern, ::System::Globalization::TimeSpanParse_TimeSpanToken  _numbers0, ::System::Globalization::TimeSpanParse_TimeSpanToken  _numbers1, ::System::Globalization::TimeSpanParse_TimeSpanToken  _numbers2, ::System::Globalization::TimeSpanParse_TimeSpanToken  _numbers3, ::System::Globalization::TimeSpanParse_TimeSpanToken  _numbers4, ::System::ReadOnlySpan_1<char16_t>  _literals0, ::System::ReadOnlySpan_1<char16_t>  _literals1, ::System::ReadOnlySpan_1<char16_t>  _literals2, ::System::ReadOnlySpan_1<char16_t>  _literals3, ::System::ReadOnlySpan_1<char16_t>  _literals4, ::System::ReadOnlySpan_1<char16_t>  _literals5) noexcept  {
this->_lastSeenTTT = _lastSeenTTT;
this->_tokenCount = _tokenCount;
this->_sepCount = _sepCount;
this->_numCount = _numCount;
this->_posLoc = _posLoc;
this->_negLoc = _negLoc;
this->_posLocInit = _posLocInit;
this->_negLocInit = _negLocInit;
this->_fullPosPattern = _fullPosPattern;
this->_fullNegPattern = _fullNegPattern;
this->_numbers0 = _numbers0;
this->_numbers1 = _numbers1;
this->_numbers2 = _numbers2;
this->_numbers3 = _numbers3;
this->_numbers4 = _numbers4;
this->_literals0 = _literals0;
this->_literals1 = _literals1;
this->_literals2 = _literals2;
this->_literals3 = _literals3;
this->_literals4 = _literals4;
this->_literals5 = _literals5;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanRawInfo::TimeSpanParse_TimeSpanRawInfo()   {
}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanResult::*)(bool)>(&::System::Globalization::TimeSpanParse_TimeSpanResult::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181699330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanResult>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanResult::*)(::System::Globalization::TimeSpanParse_ParseFailureKind, ::StringW, ::System::Object*, ::StringW)>(&::System::Globalization::TimeSpanParse_TimeSpanResult::SetFailure)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181699200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::System::Globalization::TimeSpanParse_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanResult::_ctor(bool  throwOnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanResult>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, throwOnFailure);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanResult::SetFailure(::System::Globalization::TimeSpanParse_ParseFailureKind  kind, ::StringW  resourceKey, ::System::Object*  messageArgument, ::StringW  argumentName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::System::Globalization::TimeSpanParse_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, kind, resourceKey, messageArgument, argumentName);
}
// Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanResult::TimeSpanParse_TimeSpanResult(::System::TimeSpan  parsedTimeSpan, bool  _throwOnFailure) noexcept  {
this->parsedTimeSpan = parsedTimeSpan;
this->_throwOnFailure = _throwOnFailure;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanResult::TimeSpanParse_TimeSpanResult()   {
}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Pow10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t)>(&::System::Globalization::TimeSpanParse::Pow10)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181692d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"Pow10", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryTimeToTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::by_ref<int64_t>)>(&::System::Globalization::TimeSpanParse::TryTimeToTicks)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1816978b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryTimeToTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanParse::Parse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181692ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::IFormatProvider*, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseTimeSpan)> {
  constexpr static std::size_t size = 0xf60;
  constexpr static std::size_t addrs = 0x181696950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseTimeSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181692de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminalState", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_DHMSF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x181692f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_DHMSF", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HMS_F_D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D)> {
  constexpr static std::size_t size = 0x1a50;
  constexpr static std::size_t addrs = 0x181693600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HMS_F_D", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM_S_D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D)> {
  constexpr static std::size_t size = 0x1610;
  constexpr static std::size_t addrs = 0x181695050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HM_S_D", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HM)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181696660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HM", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_D)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181693340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_D", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
inline int64_t System::Globalization::TimeSpanParse::Pow10(int32_t  pow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"Pow10", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, pow);
}
inline bool System::Globalization::TimeSpanParse::TryTimeToTicks(bool  positive, ::System::Globalization::TimeSpanParse_TimeSpanToken  days, ::System::Globalization::TimeSpanParse_TimeSpanToken  hours, ::System::Globalization::TimeSpanParse_TimeSpanToken  minutes, ::System::Globalization::TimeSpanParse_TimeSpanToken  seconds, ::System::Globalization::TimeSpanParse_TimeSpanToken  fraction, ::by_ref<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryTimeToTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, positive, days, hours, minutes, seconds, fraction, result);
}
inline ::System::TimeSpan System::Globalization::TimeSpanParse::Parse(::System::ReadOnlySpan_1<char16_t>  input, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, input, formatProvider);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  style, ::System::IFormatProvider*  formatProvider, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseTimeSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, style, formatProvider, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminalState(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>  raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminalState", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>  raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_DHMSF", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>  raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HMS_F_D", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>  raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HM_S_D", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>  raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HM", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_D(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>  raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_D", {}, {::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse::TimeSpanParse()   {
}
