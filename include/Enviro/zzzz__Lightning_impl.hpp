#pragma once
// IWYU pragma private; include "Enviro/Lightning.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__Lightning_def.hpp"
#include "Enviro/zzzz__ILightningEffect_def.hpp"
#include "Enviro/zzzz__Lightning_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Enviro::Lightning__CreateLightningBolt_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning__CreateLightningBolt_d__19::*)(int32_t)>(&::Enviro::Lightning__CreateLightningBolt_d__19::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateLightningBolt_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning__CreateLightningBolt_d__19::*)()>(&::Enviro::Lightning__CreateLightningBolt_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateLightningBolt_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::Lightning__CreateLightningBolt_d__19::*)()>(&::Enviro::Lightning__CreateLightningBolt_d__19::MoveNext)> {
  constexpr static std::size_t size = 0xc30;
  constexpr static std::size_t addrs = 0x18061a5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateLightningBolt_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Enviro::Lightning__CreateLightningBolt_d__19::*)()>(&::Enviro::Lightning__CreateLightningBolt_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateLightningBolt_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning__CreateLightningBolt_d__19::*)()>(&::Enviro::Lightning__CreateLightningBolt_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateLightningBolt_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Enviro::Lightning__CreateLightningBolt_d__19::*)()>(&::Enviro::Lightning__CreateLightningBolt_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Enviro::Lightning>& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Enviro::Lightning> const& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_set___4__this(::UnityW<::Enviro::Lightning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get__arcDist_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcDist_5__2;
}
constexpr float_t const& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get__arcDist_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcDist_5__2;
}
constexpr void Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_set__arcDist_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arcDist_5__2 = value;
}
constexpr int32_t& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get__i_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr int32_t const& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get__i_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr void Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_set__i_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__3 = value;
}
constexpr ::UnityEngine::Vector3& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get__pos_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pos_5__4;
}
constexpr ::UnityEngine::Vector3 const& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get__pos_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pos_5__4;
}
constexpr void Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_set__pos_5__4(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pos_5__4 = value;
}
constexpr int32_t& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get__s_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____s_5__5;
}
constexpr int32_t const& Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_get__s_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____s_5__5;
}
constexpr void Enviro::Lightning__CreateLightningBolt_d__19::__cordl_internal_set__s_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____s_5__5 = value;
}
inline void Enviro::Lightning__CreateLightningBolt_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Enviro::Lightning__CreateLightningBolt_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Enviro::Lightning__CreateLightningBolt_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Enviro::Lightning__CreateLightningBolt_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Enviro::Lightning__CreateLightningBolt_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Enviro::Lightning__CreateLightningBolt_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateLightningBolt_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Enviro::Lightning__CreateLightningBolt_d__19* Enviro::Lightning__CreateLightningBolt_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::Lightning__CreateLightningBolt_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Enviro::Lightning__CreateLightningBolt_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Enviro::Lightning__CreateLightningBolt_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Enviro::Lightning__CreateLightningBolt_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Enviro::Lightning__CreateLightningBolt_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Enviro::Lightning__CreateLightningBolt_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Enviro::Lightning__CreateLightningBolt_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Enviro::Lightning__CreateLightningBolt_d__19::Lightning__CreateLightningBolt_d__19()   {
}
//  Writing Method size for method: ::Enviro::Lightning__CreateSplit_d__20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning__CreateSplit_d__20::*)(int32_t)>(&::Enviro::Lightning__CreateSplit_d__20::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateSplit_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning__CreateSplit_d__20::*)()>(&::Enviro::Lightning__CreateSplit_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateSplit_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::Lightning__CreateSplit_d__20::*)()>(&::Enviro::Lightning__CreateSplit_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x18061b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateSplit_d__20.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Enviro::Lightning__CreateSplit_d__20::*)()>(&::Enviro::Lightning__CreateSplit_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateSplit_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning__CreateSplit_d__20::*)()>(&::Enviro::Lightning__CreateSplit_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning__CreateSplit_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Enviro::Lightning__CreateSplit_d__20::*)()>(&::Enviro::Lightning__CreateSplit_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Enviro::Lightning__CreateSplit_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Enviro::Lightning__CreateSplit_d__20::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Enviro::Lightning>& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Enviro::Lightning> const& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Enviro::Lightning__CreateSplit_d__20::__cordl_internal_set___4__this(::UnityW<::Enviro::Lightning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Vector3& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get_pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr ::UnityEngine::Vector3 const& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get_pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr void Enviro::Lightning__CreateSplit_d__20::__cordl_internal_set_pos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos = value;
}
constexpr ::UnityEngine::Vector3& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get_targetP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetP;
}
constexpr ::UnityEngine::Vector3 const& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get_targetP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetP;
}
constexpr void Enviro::Lightning__CreateSplit_d__20::__cordl_internal_set_targetP(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetP = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get__split_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____split_5__2;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::Lightning__CreateSplit_d__20::__cordl_internal_get__split_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____split_5__2;
}
constexpr void Enviro::Lightning__CreateSplit_d__20::__cordl_internal_set__split_5__2(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____split_5__2 = value;
}
inline void Enviro::Lightning__CreateSplit_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Enviro::Lightning__CreateSplit_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Enviro::Lightning__CreateSplit_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Enviro::Lightning__CreateSplit_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Enviro::Lightning__CreateSplit_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Enviro::Lightning__CreateSplit_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning__CreateSplit_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Enviro::Lightning__CreateSplit_d__20* Enviro::Lightning__CreateSplit_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::Lightning__CreateSplit_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Enviro::Lightning__CreateSplit_d__20::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Enviro::Lightning__CreateSplit_d__20::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Enviro::Lightning__CreateSplit_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Enviro::Lightning__CreateSplit_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Enviro::Lightning__CreateSplit_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Enviro::Lightning__CreateSplit_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Enviro::Lightning__CreateSplit_d__20::Lightning__CreateSplit_d__20()   {
}
//  Writing Method size for method: ::Enviro::Lightning.CastBolt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Enviro::Lightning::CastBolt)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18061a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"CastBolt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning::*)()>(&::Enviro::Lightning::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061a210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning.CreateLightningBolt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Enviro::Lightning::*)()>(&::Enviro::Lightning::CreateLightningBolt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061a140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"CreateLightningBolt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning.CreateSplit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Enviro::Lightning::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Enviro::Lightning::CreateSplit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18061a190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"CreateSplit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning.CastBolt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning::*)()>(&::Enviro::Lightning::CastBolt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18061a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"CastBolt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning.Randomize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Enviro::Lightning::*)(::UnityEngine::Vector3, float_t)>(&::Enviro::Lightning::Randomize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18061a250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"Randomize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning::*)()>(&::Enviro::Lightning::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18061a340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::Lightning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::Lightning::*)()>(&::Enviro::Lightning::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::Lightning::__cordl_internal_get_flashIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashIntensity;
}
constexpr float_t const& Enviro::Lightning::__cordl_internal_get_flashIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashIntensity;
}
constexpr void Enviro::Lightning::__cordl_internal_set_flashIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashIntensity = value;
}
constexpr ::UnityEngine::Vector3& Enviro::Lightning::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityEngine::Vector3 const& Enviro::Lightning::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Enviro::Lightning::__cordl_internal_set_target(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& Enviro::Lightning::__cordl_internal_get_lineRend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRend;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& Enviro::Lightning::__cordl_internal_get_lineRend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRend;
}
constexpr void Enviro::Lightning::__cordl_internal_set_lineRend(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineRend = value;
}
constexpr ::UnityW<::UnityEngine::Light>& Enviro::Lightning::__cordl_internal_get_myLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& Enviro::Lightning::__cordl_internal_get_myLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myLight;
}
constexpr void Enviro::Lightning::__cordl_internal_set_myLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myLight = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::Lightning::__cordl_internal_get_planeMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::Lightning::__cordl_internal_get_planeMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeMat;
}
constexpr void Enviro::Lightning::__cordl_internal_set_planeMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___planeMat = value;
}
constexpr int32_t& Enviro::Lightning::__cordl_internal_get_arcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcs;
}
constexpr int32_t const& Enviro::Lightning::__cordl_internal_get_arcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcs;
}
constexpr void Enviro::Lightning::__cordl_internal_set_arcs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arcs = value;
}
constexpr float_t& Enviro::Lightning::__cordl_internal_get_arcLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcLength;
}
constexpr float_t const& Enviro::Lightning::__cordl_internal_get_arcLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcLength;
}
constexpr void Enviro::Lightning::__cordl_internal_set_arcLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arcLength = value;
}
constexpr float_t& Enviro::Lightning::__cordl_internal_get_arcVariation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcVariation;
}
constexpr float_t const& Enviro::Lightning::__cordl_internal_get_arcVariation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcVariation;
}
constexpr void Enviro::Lightning::__cordl_internal_set_arcVariation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arcVariation = value;
}
constexpr float_t& Enviro::Lightning::__cordl_internal_get_inaccuracy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inaccuracy;
}
constexpr float_t const& Enviro::Lightning::__cordl_internal_get_inaccuracy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inaccuracy;
}
constexpr void Enviro::Lightning::__cordl_internal_set_inaccuracy(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inaccuracy = value;
}
constexpr int32_t& Enviro::Lightning::__cordl_internal_get_splits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splits;
}
constexpr int32_t const& Enviro::Lightning::__cordl_internal_get_splits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splits;
}
constexpr void Enviro::Lightning::__cordl_internal_set_splits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splits = value;
}
constexpr int32_t& Enviro::Lightning::__cordl_internal_get_maxSplits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSplits;
}
constexpr int32_t const& Enviro::Lightning::__cordl_internal_get_maxSplits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSplits;
}
constexpr void Enviro::Lightning::__cordl_internal_set_maxSplits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSplits = value;
}
constexpr int32_t& Enviro::Lightning::__cordl_internal_get_splitCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitCount;
}
constexpr int32_t const& Enviro::Lightning::__cordl_internal_get_splitCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitCount;
}
constexpr void Enviro::Lightning::__cordl_internal_set_splitCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitCount = value;
}
constexpr float_t& Enviro::Lightning::__cordl_internal_get_splitLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitLength;
}
constexpr float_t const& Enviro::Lightning::__cordl_internal_get_splitLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitLength;
}
constexpr void Enviro::Lightning::__cordl_internal_set_splitLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitLength = value;
}
constexpr float_t& Enviro::Lightning::__cordl_internal_get_splitVariation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitVariation;
}
constexpr float_t const& Enviro::Lightning::__cordl_internal_get_splitVariation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitVariation;
}
constexpr void Enviro::Lightning::__cordl_internal_set_splitVariation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitVariation = value;
}
constexpr ::UnityEngine::Vector3& Enviro::Lightning::__cordl_internal_get_toTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toTarget;
}
constexpr ::UnityEngine::Vector3 const& Enviro::Lightning::__cordl_internal_get_toTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toTarget;
}
constexpr void Enviro::Lightning::__cordl_internal_set_toTarget(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toTarget = value;
}
constexpr bool& Enviro::Lightning::__cordl_internal_get_fadeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOut;
}
constexpr bool const& Enviro::Lightning::__cordl_internal_get_fadeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOut;
}
constexpr void Enviro::Lightning::__cordl_internal_set_fadeOut(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeOut = value;
}
constexpr float_t& Enviro::Lightning::__cordl_internal_get_fadeTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeTimer;
}
constexpr float_t const& Enviro::Lightning::__cordl_internal_get_fadeTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeTimer;
}
constexpr void Enviro::Lightning::__cordl_internal_set_fadeTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeTimer = value;
}
inline void Enviro::Lightning::CastBolt(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"CastBolt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, target);
}
inline void Enviro::Lightning::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Enviro::Lightning::CreateLightningBolt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"CreateLightningBolt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Enviro::Lightning::CreateSplit(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  targetP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"CreateSplit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, pos, targetP);
}
inline void Enviro::Lightning::CastBolt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"CastBolt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Enviro::Lightning::Randomize(::UnityEngine::Vector3  newVector, float_t  devation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"Randomize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, newVector, devation);
}
inline void Enviro::Lightning::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::Lightning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::Lightning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::Lightning* Enviro::Lightning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::Lightning*>());
}
/// @brief Convert operator to "::Enviro::ILightningEffect"
constexpr  Enviro::Lightning::operator ::Enviro::ILightningEffect*() noexcept {
return static_cast<::Enviro::ILightningEffect*>(static_cast<void*>(this));
}
/// @brief Convert to "::Enviro::ILightningEffect"
constexpr ::Enviro::ILightningEffect* Enviro::Lightning::i___Enviro__ILightningEffect() noexcept {
return static_cast<::Enviro::ILightningEffect*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Enviro::Lightning::Lightning()   {
}
