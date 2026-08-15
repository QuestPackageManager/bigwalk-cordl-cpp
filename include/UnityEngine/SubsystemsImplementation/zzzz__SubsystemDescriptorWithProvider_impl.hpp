#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemDescriptorWithProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)(::StringW)>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::set_id)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"set_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.get_providerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_providerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"get_providerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.set_providerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)(::System::Type*)>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::set_providerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"set_providerType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.get_subsystemTypeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_subsystemTypeOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"get_subsystemTypeOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.set_subsystemTypeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)(::System::Type*)>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::set_subsystemTypeOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"set_subsystemTypeOverride", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.ThrowIfInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::ThrowIfInvalid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                    {::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_get__id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr ::StringW const& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_get__id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_set__id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id_k__BackingField = value;
}
constexpr ::System::Type*& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_get__providerType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____providerType_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_get__providerType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____providerType_k__BackingField;
}
constexpr void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_set__providerType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____providerType_k__BackingField = value;
}
constexpr ::System::Type*& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_get__subsystemTypeOverride_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subsystemTypeOverride_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_get__subsystemTypeOverride_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subsystemTypeOverride_k__BackingField;
}
constexpr void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_set__subsystemTypeOverride_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subsystemTypeOverride_k__BackingField = value;
}
inline ::StringW UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::set_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"set_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_providerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"get_providerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::set_providerType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"set_providerType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_subsystemTypeOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"get_subsystemTypeOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::set_subsystemTypeOverride(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {"set_subsystemTypeOverride", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::ThrowIfInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>());
}
/// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
constexpr  UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::operator ::UnityEngine::ISubsystemDescriptor*() noexcept {
return static_cast<::UnityEngine::ISubsystemDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISubsystemDescriptor"
constexpr ::UnityEngine::ISubsystemDescriptor* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::i___UnityEngine__ISubsystemDescriptor() noexcept {
return static_cast<::UnityEngine::ISubsystemDescriptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::SubsystemDescriptorWithProvider()   {
}
