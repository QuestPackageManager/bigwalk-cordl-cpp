#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/RewiredEventSystem.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_impl.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredEventSystem_def.hpp"
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredEventSystem.get_alwaysUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredEventSystem::*)()>(&::Rewired::Integration::UnityUI::RewiredEventSystem::get_alwaysUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(),
                        {"get_alwaysUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredEventSystem.set_alwaysUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredEventSystem::*)(bool)>(&::Rewired::Integration::UnityUI::RewiredEventSystem::set_alwaysUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ac420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(),
                        {"set_alwaysUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredEventSystem.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredEventSystem::*)()>(&::Rewired::Integration::UnityUI::RewiredEventSystem::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803ac340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredEventSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredEventSystem::*)()>(&::Rewired::Integration::UnityUI::RewiredEventSystem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ac410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Integration::UnityUI::RewiredEventSystem::__cordl_internal_get__alwaysUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alwaysUpdate;
}
constexpr bool const& Rewired::Integration::UnityUI::RewiredEventSystem::__cordl_internal_get__alwaysUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alwaysUpdate;
}
constexpr void Rewired::Integration::UnityUI::RewiredEventSystem::__cordl_internal_set__alwaysUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alwaysUpdate = value;
}
inline bool Rewired::Integration::UnityUI::RewiredEventSystem::get_alwaysUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(),
                        {"get_alwaysUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredEventSystem::set_alwaysUpdate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(),
                        {"set_alwaysUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Integration::UnityUI::RewiredEventSystem::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredEventSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredEventSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredEventSystem* Rewired::Integration::UnityUI::RewiredEventSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredEventSystem*>());
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::RewiredEventSystem::RewiredEventSystem()   {
}
