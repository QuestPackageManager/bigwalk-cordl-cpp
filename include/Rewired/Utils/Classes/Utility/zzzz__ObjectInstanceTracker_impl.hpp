#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ObjectInstanceTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__ObjectInstanceTracker_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__ObjectInstanceTracker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr T& Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_get_instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
template<typename T>
constexpr T const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_get_instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_set_instance(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instance = value;
}
template<typename T>
constexpr uint32_t& Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_get_instanceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceId;
}
template<typename T>
constexpr uint32_t const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_get_instanceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceId;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_set_instanceId(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceId = value;
}
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*& Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_get_GbHieTdhxXfBnFyBgpKhidhpAIJYB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GbHieTdhxXfBnFyBgpKhidhpAIJYB;
}
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_get_GbHieTdhxXfBnFyBgpKhidhpAIJYB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GbHieTdhxXfBnFyBgpKhidhpAIJYB;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_set_GbHieTdhxXfBnFyBgpKhidhpAIJYB(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GbHieTdhxXfBnFyBgpKhidhpAIJYB = value;
}
template<typename T>
constexpr bool& Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_get_WbClrloVEDwNFsUdEbeRUybHNhzg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WbClrloVEDwNFsUdEbeRUybHNhzg;
}
template<typename T>
constexpr bool const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_get_WbClrloVEDwNFsUdEbeRUybHNhzg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WbClrloVEDwNFsUdEbeRUybHNhzg;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::__cordl_internal_set_WbClrloVEDwNFsUdEbeRUybHNhzg(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WbClrloVEDwNFsUdEbeRUybHNhzg = value;
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::_ctor(T  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::_ctor(T  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template<typename T>
inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>* Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::New_ctor(T  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>*>(_cordl_fixed_empty_name_whitespace));
}
template<typename T>
inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>* Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::New_ctor(T  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>::ObjectInstanceTracker_Wrapper_1()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* (*)()>(&::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::get_Default)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181930ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::*)(::System::Object*)>(&::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::Register)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181930b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"Register", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::*)(uint32_t)>(&::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::Unregister)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181930b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"Unregister", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::*)()>(&::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181930a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker.tZHoIczEuIpqYtImbYoiCxDfTHry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::*)(bool)>(&::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::tZHoIczEuIpqYtImbYoiCxDfTHry)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181930ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"tZHoIczEuIpqYtImbYoiCxDfTHry", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::*)()>(&::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181930ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::*)()>(&::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181930c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Object*>*& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_GcAchPgDfcwffQpjoolIdxpFQRDob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GcAchPgDfcwffQpjoolIdxpFQRDob;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Object*>* const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_GcAchPgDfcwffQpjoolIdxpFQRDob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GcAchPgDfcwffQpjoolIdxpFQRDob;
}
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_set_GcAchPgDfcwffQpjoolIdxpFQRDob(::System::Collections::Generic::Dictionary_2<uint32_t,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GcAchPgDfcwffQpjoolIdxpFQRDob = value;
}
constexpr ::System::Object*& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_EjJOMbSaSrYsYghfGmnteZHURnuv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EjJOMbSaSrYsYghfGmnteZHURnuv;
}
constexpr ::System::Object* const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_EjJOMbSaSrYsYghfGmnteZHURnuv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EjJOMbSaSrYsYghfGmnteZHURnuv;
}
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_set_EjJOMbSaSrYsYghfGmnteZHURnuv(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EjJOMbSaSrYsYghfGmnteZHURnuv = value;
}
constexpr uint32_t& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_pZaSLhcSJSzpdvIDsxdTuiMoDMvl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pZaSLhcSJSzpdvIDsxdTuiMoDMvl;
}
constexpr uint32_t const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_pZaSLhcSJSzpdvIDsxdTuiMoDMvl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pZaSLhcSJSzpdvIDsxdTuiMoDMvl;
}
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_set_pZaSLhcSJSzpdvIDsxdTuiMoDMvl(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pZaSLhcSJSzpdvIDsxdTuiMoDMvl = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_GrjanuCsKsvxmrezQPgMZYzdWHkgA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrjanuCsKsvxmrezQPgMZYzdWHkgA;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_GrjanuCsKsvxmrezQPgMZYzdWHkgA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrjanuCsKsvxmrezQPgMZYzdWHkgA;
}
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_set_GrjanuCsKsvxmrezQPgMZYzdWHkgA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrjanuCsKsvxmrezQPgMZYzdWHkgA = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_yXLuxiEZoZOjBFGCkgvBBpiqygOS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yXLuxiEZoZOjBFGCkgvBBpiqygOS;
}
constexpr bool const& Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_get_yXLuxiEZoZOjBFGCkgvBBpiqygOS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yXLuxiEZoZOjBFGCkgvBBpiqygOS;
}
constexpr void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::__cordl_internal_set_yXLuxiEZoZOjBFGCkgvBBpiqygOS(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yXLuxiEZoZOjBFGCkgvBBpiqygOS = value;
}
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::setStaticF_upFFhammXXgaxnGMNrnJEntLFeER(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*, "upFFhammXXgaxnGMNrnJEntLFeER", ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(std::forward<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(value));
}
inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* Rewired::Utils::Classes::Utility::ObjectInstanceTracker::getStaticF_upFFhammXXgaxnGMNrnJEntLFeER()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*, "upFFhammXXgaxnGMNrnJEntLFeER", ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>();
}
inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* Rewired::Utils::Classes::Utility::ObjectInstanceTracker::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(nullptr, ___internal_method);
}
inline uint32_t Rewired::Utils::Classes::Utility::ObjectInstanceTracker::Register(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"Register", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, instance);
}
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::Unregister(uint32_t  instanceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"Unregister", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceId);
}
template<typename T>
inline bool Rewired::Utils::Classes::Utility::ObjectInstanceTracker::TryGetInstance(uint32_t  instanceId, ::by_ref<T>  instance)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                    {"TryGetInstance", {::i2c::class_of<T>()}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instanceId, instance);
}
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::tZHoIczEuIpqYtImbYoiCxDfTHry(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {"tZHoIczEuIpqYtImbYoiCxDfTHry", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ObjectInstanceTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* Rewired::Utils::Classes::Utility::ObjectInstanceTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::ObjectInstanceTracker::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::ObjectInstanceTracker::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker::ObjectInstanceTracker()   {
}
