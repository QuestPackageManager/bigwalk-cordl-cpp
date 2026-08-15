#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsMaterial.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsMaterial::*)()>(&::UnityEngine::PhysicsMaterial::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822fd1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.Internal_CreateDynamicsMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsMaterial*, ::StringW)>(&::UnityEngine::PhysicsMaterial::Internal_CreateDynamicsMaterial)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822fd0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                        {"Internal_CreateDynamicsMaterial", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.Internal_CreateDynamicsMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsMaterial*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::PhysicsMaterial::Internal_CreateDynamicsMaterial_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822fd0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                        {"Internal_CreateDynamicsMaterial_Injected", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::PhysicsMaterial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::PhysicsMaterial::Internal_CreateDynamicsMaterial(::UnityEngine::PhysicsMaterial*  mat, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                        {"Internal_CreateDynamicsMaterial", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mat, name);
}
inline void UnityEngine::PhysicsMaterial::Internal_CreateDynamicsMaterial_Injected(::UnityEngine::PhysicsMaterial*  mat, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                        {"Internal_CreateDynamicsMaterial_Injected", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mat, name);
}
inline ::UnityEngine::PhysicsMaterial* UnityEngine::PhysicsMaterial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::PhysicsMaterial*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsMaterial::PhysicsMaterial()   {
}
