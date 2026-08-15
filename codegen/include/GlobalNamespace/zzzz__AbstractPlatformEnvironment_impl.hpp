#pragma once
// IWYU pragma private; include "GlobalNamespace/AbstractPlatformEnvironment.hpp"
#include "GlobalNamespace/zzzz__EPlatformEnvironment_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__AbstractPlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__EPlatformEnvironment_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AbstractPlatformEnvironment.SetForcedEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbstractPlatformEnvironment::*)(::GlobalNamespace::EPlatformEnvironment)>(&::GlobalNamespace::AbstractPlatformEnvironment::SetForcedEnvironment)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181780df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                        {"SetForcedEnvironment", {}, {::i2c::type_of<::GlobalNamespace::EPlatformEnvironment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbstractPlatformEnvironment.get_CurrentEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EPlatformEnvironment (::GlobalNamespace::AbstractPlatformEnvironment::*)()>(&::GlobalNamespace::AbstractPlatformEnvironment::get_CurrentEnvironment)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac52c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                        {"get_CurrentEnvironment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbstractPlatformEnvironment.GetCurrentEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EPlatformEnvironment (::GlobalNamespace::AbstractPlatformEnvironment::*)()>(&::GlobalNamespace::AbstractPlatformEnvironment::GetCurrentEnvironment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                    {::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbstractPlatformEnvironment.get_CheatsDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AbstractPlatformEnvironment::*)()>(&::GlobalNamespace::AbstractPlatformEnvironment::get_CheatsDisabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac5240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                    {::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbstractPlatformEnvironment.get_DevCheatsDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AbstractPlatformEnvironment::*)()>(&::GlobalNamespace::AbstractPlatformEnvironment::get_DevCheatsDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181163ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                    {::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbstractPlatformEnvironment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbstractPlatformEnvironment::*)()>(&::GlobalNamespace::AbstractPlatformEnvironment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::GlobalNamespace::EPlatformEnvironment>& GlobalNamespace::AbstractPlatformEnvironment::__cordl_internal_get_mForcedEnvironment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mForcedEnvironment;
}
constexpr ::System::Nullable_1<::GlobalNamespace::EPlatformEnvironment> const& GlobalNamespace::AbstractPlatformEnvironment::__cordl_internal_get_mForcedEnvironment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mForcedEnvironment;
}
constexpr void GlobalNamespace::AbstractPlatformEnvironment::__cordl_internal_set_mForcedEnvironment(::System::Nullable_1<::GlobalNamespace::EPlatformEnvironment>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mForcedEnvironment = value;
}
inline void GlobalNamespace::AbstractPlatformEnvironment::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::GlobalNamespace::AbstractPlatformEnvironment*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* GlobalNamespace::AbstractPlatformEnvironment::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::GlobalNamespace::AbstractPlatformEnvironment*>();
}
inline void GlobalNamespace::AbstractPlatformEnvironment::SetForcedEnvironment(::GlobalNamespace::EPlatformEnvironment  aEnviro)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                        {"SetForcedEnvironment", {}, {::i2c::type_of<::GlobalNamespace::EPlatformEnvironment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aEnviro);
}
inline ::GlobalNamespace::EPlatformEnvironment GlobalNamespace::AbstractPlatformEnvironment::get_CurrentEnvironment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                        {"get_CurrentEnvironment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EPlatformEnvironment>(this, ___internal_method);
}
inline ::GlobalNamespace::EPlatformEnvironment GlobalNamespace::AbstractPlatformEnvironment::GetCurrentEnvironment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EPlatformEnvironment>(this, ___internal_method);
}
inline bool GlobalNamespace::AbstractPlatformEnvironment::get_CheatsDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AbstractPlatformEnvironment::get_DevCheatsDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AbstractPlatformEnvironment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbstractPlatformEnvironment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AbstractPlatformEnvironment* GlobalNamespace::AbstractPlatformEnvironment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AbstractPlatformEnvironment*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AbstractPlatformEnvironment::AbstractPlatformEnvironment()   {
}
