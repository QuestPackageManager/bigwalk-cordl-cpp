#pragma once
// IWYU pragma private; include "Unity/Properties/TypeTraits.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__TypeTraits_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Properties::TypeTraits.IsContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::TypeTraits::IsContainer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18230b370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::TypeTraits*>(),
                        {"IsContainer", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeTraits.IsAbstractOrInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::TypeTraits::IsAbstractOrInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18230b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::TypeTraits*>(),
                        {"IsAbstractOrInterface", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeTraits.CanBeNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::TypeTraits::CanBeNull)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18230b300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::TypeTraits*>(),
                        {"CanBeNull", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeTraits.IsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::TypeTraits::IsObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18230b410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::TypeTraits*>(),
                        {"IsObject", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Properties::TypeTraits::IsContainer(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::TypeTraits*>(),
                        {"IsContainer", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Unity::Properties::TypeTraits::IsAbstractOrInterface(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::TypeTraits*>(),
                        {"IsAbstractOrInterface", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Unity::Properties::TypeTraits::CanBeNull(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::TypeTraits*>(),
                        {"CanBeNull", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Unity::Properties::TypeTraits::IsObject(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::TypeTraits*>(),
                        {"IsObject", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeTraits::TypeTraits()   {
}
