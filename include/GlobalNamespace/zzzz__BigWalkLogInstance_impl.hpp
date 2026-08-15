#pragma once
// IWYU pragma private; include "GlobalNamespace/BigWalkLogInstance.hpp"
#include "Shipmates/Utils/zzzz__BaseLogInstance_impl.hpp"
#include "GlobalNamespace/zzzz__BigWalkLogInstance_def.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveContext_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BigWalkLogInstance.BigWalkLogInstanceCreator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BigWalkLogInstance* (*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::BigWalkLogInstance::BigWalkLogInstanceCreator)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181acadf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkLogInstance*>(),
                        {"BigWalkLogInstanceCreator", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigWalkLogInstance.InjectContextMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigWalkLogInstance::*)(::Shipmates::Utils::OpenObserveContext*)>(&::GlobalNamespace::BigWalkLogInstance::InjectContextMetadata)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181acaed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BigWalkLogInstance*>(),
                    {::i2c::class_of<::GlobalNamespace::BigWalkLogInstance*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigWalkLogInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigWalkLogInstance::*)()>(&::GlobalNamespace::BigWalkLogInstance::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkLogInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BigWalkLogInstance::__cordl_internal_get_networkMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMode;
}
constexpr ::StringW const& GlobalNamespace::BigWalkLogInstance::__cordl_internal_get_networkMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMode;
}
constexpr void GlobalNamespace::BigWalkLogInstance::__cordl_internal_set_networkMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkMode = value;
}
constexpr ::StringW& GlobalNamespace::BigWalkLogInstance::__cordl_internal_get_onlineFriendCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlineFriendCode;
}
constexpr ::StringW const& GlobalNamespace::BigWalkLogInstance::__cordl_internal_get_onlineFriendCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlineFriendCode;
}
constexpr void GlobalNamespace::BigWalkLogInstance::__cordl_internal_set_onlineFriendCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlineFriendCode = value;
}
inline ::GlobalNamespace::BigWalkLogInstance* GlobalNamespace::BigWalkLogInstance::BigWalkLogInstanceCreator(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkLogInstance*>(),
                        {"BigWalkLogInstanceCreator", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BigWalkLogInstance*>(nullptr, ___internal_method, condition, stackTrace, type);
}
inline void GlobalNamespace::BigWalkLogInstance::InjectContextMetadata(::Shipmates::Utils::OpenObserveContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BigWalkLogInstance*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::BigWalkLogInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkLogInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BigWalkLogInstance* GlobalNamespace::BigWalkLogInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BigWalkLogInstance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BigWalkLogInstance::BigWalkLogInstance()   {
}
