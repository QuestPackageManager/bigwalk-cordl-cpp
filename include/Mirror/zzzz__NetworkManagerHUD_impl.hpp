#pragma once
// IWYU pragma private; include "Mirror/NetworkManagerHUD.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/zzzz__NetworkManagerHUD_def.hpp"
#include "Mirror/zzzz__NetworkManager_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkManagerHUD.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManagerHUD::*)()>(&::Mirror::NetworkManagerHUD::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815458e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManagerHUD.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManagerHUD::*)()>(&::Mirror::NetworkManagerHUD::OnGUI)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181545910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManagerHUD.StartButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManagerHUD::*)()>(&::Mirror::NetworkManagerHUD::StartButtons)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x181545bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"StartButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManagerHUD.StatusLabels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManagerHUD::*)()>(&::Mirror::NetworkManagerHUD::StatusLabels)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181546260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"StatusLabels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManagerHUD.StopButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManagerHUD::*)()>(&::Mirror::NetworkManagerHUD::StopButtons)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1815463b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"StopButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkManagerHUD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkManagerHUD::*)()>(&::Mirror::NetworkManagerHUD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::NetworkManager>& Mirror::NetworkManagerHUD::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::Mirror::NetworkManager> const& Mirror::NetworkManagerHUD::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void Mirror::NetworkManagerHUD::__cordl_internal_set_manager(::UnityW<::Mirror::NetworkManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr int32_t& Mirror::NetworkManagerHUD::__cordl_internal_get_offsetX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetX;
}
constexpr int32_t const& Mirror::NetworkManagerHUD::__cordl_internal_get_offsetX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetX;
}
constexpr void Mirror::NetworkManagerHUD::__cordl_internal_set_offsetX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetX = value;
}
constexpr int32_t& Mirror::NetworkManagerHUD::__cordl_internal_get_offsetY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetY;
}
constexpr int32_t const& Mirror::NetworkManagerHUD::__cordl_internal_get_offsetY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetY;
}
constexpr void Mirror::NetworkManagerHUD::__cordl_internal_set_offsetY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetY = value;
}
inline void Mirror::NetworkManagerHUD::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManagerHUD::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManagerHUD::StartButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"StartButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManagerHUD::StatusLabels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"StatusLabels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManagerHUD::StopButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {"StopButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkManagerHUD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkManagerHUD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkManagerHUD* Mirror::NetworkManagerHUD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkManagerHUD*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkManagerHUD::NetworkManagerHUD()   {
}
