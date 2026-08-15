#pragma once
// IWYU pragma private; include "Rewired/Initializer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rewired/zzzz__Initializer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Rewired::Initializer.get_inputManagerPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Rewired::Initializer::*)()>(&::Rewired::Initializer::get_inputManagerPrefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"get_inputManagerPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Initializer.set_inputManagerPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Initializer::*)(::UnityEngine::GameObject*)>(&::Rewired::Initializer::set_inputManagerPrefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"set_inputManagerPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Initializer.get_destroySelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Initializer::*)()>(&::Rewired::Initializer::get_destroySelf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"get_destroySelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Initializer.set_destroySelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Initializer::*)(bool)>(&::Rewired::Initializer::set_destroySelf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"set_destroySelf", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Initializer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Initializer::*)()>(&::Rewired::Initializer::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18195ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Initializer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Initializer::*)()>(&::Rewired::Initializer::Initialize)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x18195ef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Initializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Initializer::*)()>(&::Rewired::Initializer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18195f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Rewired::Initializer::__cordl_internal_get__inputManagerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputManagerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Rewired::Initializer::__cordl_internal_get__inputManagerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputManagerPrefab;
}
constexpr void Rewired::Initializer::__cordl_internal_set__inputManagerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputManagerPrefab = value;
}
constexpr bool& Rewired::Initializer::__cordl_internal_get__destroySelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destroySelf;
}
constexpr bool const& Rewired::Initializer::__cordl_internal_get__destroySelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destroySelf;
}
constexpr void Rewired::Initializer::__cordl_internal_set__destroySelf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destroySelf = value;
}
inline ::UnityW<::UnityEngine::GameObject> Rewired::Initializer::get_inputManagerPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"get_inputManagerPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Rewired::Initializer::set_inputManagerPrefab(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"set_inputManagerPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Initializer::get_destroySelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"get_destroySelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Initializer::set_destroySelf(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"set_destroySelf", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Initializer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Initializer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Initializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Initializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Initializer* Rewired::Initializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Initializer*>());
}
// Ctor Parameters []
constexpr ::Rewired::Initializer::Initializer()   {
}
