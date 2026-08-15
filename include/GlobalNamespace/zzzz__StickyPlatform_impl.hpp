#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyPlatform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StickyPlatform_def.hpp"
#include "GlobalNamespace/zzzz__PlatformingBody_def.hpp"
#include "LobbyNetworking/zzzz__ITicketed_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StickyPlatform.get_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::GlobalNamespace::StickyPlatform::*)()>(&::GlobalNamespace::StickyPlatform::get_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180416380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {"get_ticket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatform.set_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatform::*)(uint16_t)>(&::GlobalNamespace::StickyPlatform::set_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180416390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatform.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatform::*)()>(&::GlobalNamespace::StickyPlatform::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180416370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatform.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatform::*)()>(&::GlobalNamespace::StickyPlatform::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180380080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatform::*)()>(&::GlobalNamespace::StickyPlatform::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint16_t& GlobalNamespace::StickyPlatform::__cordl_internal_get__ticket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr uint16_t const& GlobalNamespace::StickyPlatform::__cordl_internal_get__ticket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr void GlobalNamespace::StickyPlatform::__cordl_internal_set__ticket_k__BackingField(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ticket_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::PlatformingBody>& GlobalNamespace::StickyPlatform::__cordl_internal_get_platformingBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformingBody;
}
constexpr ::UnityW<::GlobalNamespace::PlatformingBody> const& GlobalNamespace::StickyPlatform::__cordl_internal_get_platformingBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformingBody;
}
constexpr void GlobalNamespace::StickyPlatform::__cordl_internal_set_platformingBody(::UnityW<::GlobalNamespace::PlatformingBody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformingBody = value;
}
constexpr ::System::Action*& GlobalNamespace::StickyPlatform::__cordl_internal_get_OnLocalPlayerEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLocalPlayerEnter;
}
constexpr ::System::Action* const& GlobalNamespace::StickyPlatform::__cordl_internal_get_OnLocalPlayerEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLocalPlayerEnter;
}
constexpr void GlobalNamespace::StickyPlatform::__cordl_internal_set_OnLocalPlayerEnter(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLocalPlayerEnter = value;
}
inline uint16_t GlobalNamespace::StickyPlatform::get_ticket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {"get_ticket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void GlobalNamespace::StickyPlatform::set_ticket(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StickyPlatform::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyPlatform::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyPlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StickyPlatform* GlobalNamespace::StickyPlatform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StickyPlatform*>());
}
/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr  GlobalNamespace::StickyPlatform::operator ::LobbyNetworking::ITicketed*() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* GlobalNamespace::StickyPlatform::i___LobbyNetworking__ITicketed() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StickyPlatform::StickyPlatform()   {
}
