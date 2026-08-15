#pragma once
// IWYU pragma private; include "Rewired/Utils/EnumTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__EnumTools_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::EnumTools.GetIntValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::System::Type*)>(&::Rewired::Utils::EnumTools::GetIntValues)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819036b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                        {"GetIntValues", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::EnumTools.IsEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Rewired::Utils::EnumTools::IsEnum)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181903740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                        {"IsEnum", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::EnumTools.GetUnderlyingType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Rewired::Utils::EnumTools::GetUnderlyingType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819036d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                        {"GetUnderlyingType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::EnumTools.IsValidUnderlyingType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Rewired::Utils::EnumTools::IsValidUnderlyingType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181903790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                        {"IsValidUnderlyingType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename TEnum>
inline ::StringW Rewired::Utils::EnumTools::GetName(TEnum  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                    {"GetName", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
template<typename TEnumFrom,typename TEnumTo>
inline bool Rewired::Utils::EnumTools::ConvertByName(TEnumFrom  convertFrom, ::by_ref<TEnumTo>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                    {"ConvertByName", {::i2c::class_of<TEnumFrom>(), ::i2c::class_of<TEnumTo>()}, {::i2c::type_of<TEnumFrom>(), ::i2c::type_of<::by_ref<TEnumTo>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnumFrom>(), ::i2c::class_of<TEnumTo>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, convertFrom, value);
}
inline ::ArrayW<int32_t> Rewired::Utils::EnumTools::GetIntValues(::System::Type*  enumType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                        {"GetIntValues", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, enumType);
}
inline bool Rewired::Utils::EnumTools::IsEnum(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                        {"IsEnum", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Type* Rewired::Utils::EnumTools::GetUnderlyingType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                        {"GetUnderlyingType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline bool Rewired::Utils::EnumTools::IsValidUnderlyingType(::System::Type*  underlyingType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EnumTools*>(),
                        {"IsValidUnderlyingType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, underlyingType);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::EnumTools::EnumTools()   {
}
