#pragma once
// IWYU pragma private; include "MA/Flora/UnityExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__UnityExtensions_def.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::UnityExtensions.ToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::EntityId)>(&::MA::Flora::UnityExtensions::ToObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815133a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnityExtensions*>(),
                        {"ToObject", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnityExtensions.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EntityId)>(&::MA::Flora::UnityExtensions::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181513390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnityExtensions*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::MA::Flora::EntityObjectRef_1<T> MA::Flora::UnityExtensions::As(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::UnityExtensions*>(),
                    {"As", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::EntityObjectRef_1<T>>(nullptr, ___internal_method, entityId);
}
template<typename T>
inline T MA::Flora::UnityExtensions::ToObject(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::UnityExtensions*>(),
                    {"ToObject", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, entityId);
}
inline ::UnityW<::UnityEngine::Object> MA::Flora::UnityExtensions::ToObject(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnityExtensions*>(),
                        {"ToObject", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, entityId);
}
inline bool MA::Flora::UnityExtensions::IsValid(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnityExtensions*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, entityId);
}
// Ctor Parameters []
constexpr ::MA::Flora::UnityExtensions::UnityExtensions()   {
}
