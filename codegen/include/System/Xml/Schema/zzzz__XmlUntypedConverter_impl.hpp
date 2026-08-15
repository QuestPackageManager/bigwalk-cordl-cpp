#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlUntypedConverter.hpp"
#include "System/Xml/Schema/zzzz__XmlListConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlUntypedConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlUntypedConverter::*)()>(&::System::Xml::Schema::XmlUntypedConverter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cc1490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Xml::Schema::XmlUntypedConverter*, bool)>(&::System::Xml::Schema::XmlUntypedConverter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cc1420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Schema::XmlUntypedConverter*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToBoolean)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181cb6130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToBoolean)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181cbfc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToDateTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181cbff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToDateTime)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181cbffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181cbff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181cbfd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToDecimal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181cc0130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToDecimal)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181cc0170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToDouble)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181cc0490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToDouble)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181cc0310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToInt32)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181cc04c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToInt32)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181cc04f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToInt64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181cc07d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToInt64)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181cc0660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToSingle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181cc0980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToSingle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181cc0800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(bool)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cb6310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(::System::DateTime)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cc1240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181cc1250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Decimal)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181cc09b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(double_t)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cc1220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(int32_t)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cbc180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(int64_t)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cbbf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(float_t)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cc1230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x181cc09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(bool, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181cbe230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::DateTime, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181cbe950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Decimal, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181cbeb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(double_t, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181cbe150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(int32_t, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181cbea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(int64_t, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181cbe070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x181cbe310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0xd40;
  constexpr static std::size_t addrs = 0x181cbec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeTypeWildcardDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeTypeWildcardDestination)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181cb2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"ChangeTypeWildcardDestination", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeTypeWildcardSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeTypeWildcardSource)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181cbdf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"ChangeTypeWildcardSource", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeListType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeListType)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181cbdd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.SupportsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::SupportsType)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x181cbf940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"SupportsType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Schema::XmlUntypedConverter::__cordl_internal_get_allowListToList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowListToList;
}
constexpr bool const& System::Xml::Schema::XmlUntypedConverter::__cordl_internal_get_allowListToList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowListToList;
}
constexpr void System::Xml::Schema::XmlUntypedConverter::__cordl_internal_set_allowListToList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowListToList = value;
}
inline void System::Xml::Schema::XmlUntypedConverter::setStaticF_Untyped(::System::Xml::Schema::XmlValueConverter*  value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "Untyped", ::System::Xml::Schema::XmlUntypedConverter*>(std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlUntypedConverter::getStaticF_Untyped()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "Untyped", ::System::Xml::Schema::XmlUntypedConverter*>();
}
inline void System::Xml::Schema::XmlUntypedConverter::setStaticF_UntypedList(::System::Xml::Schema::XmlValueConverter*  value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "UntypedList", ::System::Xml::Schema::XmlUntypedConverter*>(std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlUntypedConverter::getStaticF_UntypedList()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "UntypedList", ::System::Xml::Schema::XmlUntypedConverter*>();
}
inline void System::Xml::Schema::XmlUntypedConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlUntypedConverter::_ctor(::System::Xml::Schema::XmlUntypedConverter*  atomicConverter, bool  allowListToList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Schema::XmlUntypedConverter*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atomicConverter, allowListToList);
}
inline bool System::Xml::Schema::XmlUntypedConverter::ToBoolean(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlUntypedConverter::ToBoolean(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlUntypedConverter::ToDateTime(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlUntypedConverter::ToDateTime(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlUntypedConverter::ToDateTimeOffset(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlUntypedConverter::ToDateTimeOffset(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, value);
}
inline ::System::Decimal System::Xml::Schema::XmlUntypedConverter::ToDecimal(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, value);
}
inline ::System::Decimal System::Xml::Schema::XmlUntypedConverter::ToDecimal(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlUntypedConverter::ToDouble(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlUntypedConverter::ToDouble(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlUntypedConverter::ToInt32(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlUntypedConverter::ToInt32(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlUntypedConverter::ToInt64(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlUntypedConverter::ToInt64(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline float_t System::Xml::Schema::XmlUntypedConverter::ToSingle(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline float_t System::Xml::Schema::XmlUntypedConverter::ToSingle(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(::System::DateTime  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(::System::DateTimeOffset  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(::System::Decimal  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(bool  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(::System::DateTime  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(::System::Decimal  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(double_t  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(int32_t  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(int64_t  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeTypeWildcardDestination(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"ChangeTypeWildcardDestination", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeTypeWildcardSource(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"ChangeTypeWildcardSource", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeListType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline bool System::Xml::Schema::XmlUntypedConverter::SupportsType(::System::Type*  clrType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"SupportsType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clrType);
}
inline ::System::Xml::Schema::XmlUntypedConverter* System::Xml::Schema::XmlUntypedConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlUntypedConverter*>());
}
inline ::System::Xml::Schema::XmlUntypedConverter* System::Xml::Schema::XmlUntypedConverter::New_ctor(::System::Xml::Schema::XmlUntypedConverter*  atomicConverter, bool  allowListToList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlUntypedConverter*>(atomicConverter, allowListToList));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlUntypedConverter::XmlUntypedConverter()   {
}
