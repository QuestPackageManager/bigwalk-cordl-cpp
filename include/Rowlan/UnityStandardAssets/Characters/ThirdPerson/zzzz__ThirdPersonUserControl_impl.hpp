#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Characters/ThirdPerson/ThirdPersonUserControl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Rowlan/UnityStandardAssets/Characters/ThirdPerson/zzzz__ThirdPersonUserControl_def.hpp"
#include "Rowlan/UnityStandardAssets/Characters/ThirdPerson/zzzz__ThirdPersonCharacter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac14f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac1580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::FixedUpdate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181ac1260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter>& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_Character()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Character;
}
constexpr ::UnityW<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter> const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_Character() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Character;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_set_m_Character(::UnityW<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Character = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_Cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cam;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_Cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cam;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_set_m_Cam(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Cam = value;
}
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_CamForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CamForward;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_CamForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CamForward;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_set_m_CamForward(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CamForward = value;
}
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Move;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Move;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_set_m_Move(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Move = value;
}
constexpr bool& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_Jump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Jump;
}
constexpr bool const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_get_m_Jump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Jump;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::__cordl_internal_set_m_Jump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Jump = value;
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl* Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*>());
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl::ThirdPersonUserControl()   {
}
