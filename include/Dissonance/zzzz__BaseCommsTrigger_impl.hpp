#pragma once
// IWYU pragma private; include "Dissonance/BaseCommsTrigger.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/zzzz__BaseCommsTrigger_def.hpp"
#include "Dissonance/zzzz__DissonanceComms_def.hpp"
#include "Dissonance/zzzz__IAccessTokenCollection_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__TokenSet_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.get_UseColliderTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::get_UseColliderTrigger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.set_UseColliderTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)(bool)>(&::Dissonance::BaseCommsTrigger::set_UseColliderTrigger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.get_CanTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::get_CanTrigger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.get_IsColliderTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::get_IsColliderTriggered)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"get_IsColliderTriggered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.get_Tokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::get_Tokens)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"get_Tokens", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.get_Comms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Dissonance::DissonanceComms> (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::get_Comms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"get_Comms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.set_Comms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)(::Dissonance::DissonanceComms*)>(&::Dissonance::BaseCommsTrigger::set_Comms)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1805c4ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"set_Comms", {}, {::i2c::type_of<::Dissonance::DissonanceComms*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805c4ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805c44c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c4820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c4820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805c4b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c4810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.TokensModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)(::StringW)>(&::Dissonance::BaseCommsTrigger::TokensModified)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c4b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.get_TokenActivationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::get_TokenActivationState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805c4e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"get_TokenActivationState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.ContainsToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)(::StringW)>(&::Dissonance::BaseCommsTrigger::ContainsToken)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805c4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"ContainsToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.AddToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)(::StringW)>(&::Dissonance::BaseCommsTrigger::AddToken)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c44a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"AddToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.RemoveToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)(::StringW)>(&::Dissonance::BaseCommsTrigger::RemoveToken)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c4b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"RemoveToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.ColliderTriggerChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::ColliderTriggerChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.OnTriggerEnter2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)(::UnityEngine::Collider2D*)>(&::Dissonance::BaseCommsTrigger::OnTriggerEnter2D)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805c4890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"OnTriggerEnter2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.OnTriggerExit2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)(::UnityEngine::Collider2D*)>(&::Dissonance::BaseCommsTrigger::OnTriggerExit2D)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c4ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"OnTriggerExit2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)(::UnityEngine::Collider*)>(&::Dissonance::BaseCommsTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805c49b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseCommsTrigger::*)(::UnityEngine::Collider*)>(&::Dissonance::BaseCommsTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c4ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.ColliderTriggerFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)(::UnityEngine::Collider*)>(&::Dissonance::BaseCommsTrigger::ColliderTriggerFilter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c46b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.ColliderTriggerFilter2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)(::UnityEngine::Collider2D*)>(&::Dissonance::BaseCommsTrigger::ColliderTriggerFilter2D)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c46b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                    {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.FindLocalVoiceComm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Dissonance::DissonanceComms> (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::FindLocalVoiceComm)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c47c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"FindLocalVoiceComm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseCommsTrigger.CheckVoiceComm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::BaseCommsTrigger::*)()>(&::Dissonance::BaseCommsTrigger::CheckVoiceComm)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805c45d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"CheckVoiceComm", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Log*& Dissonance::BaseCommsTrigger::__cordl_internal_get_Log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
constexpr ::Dissonance::Log* const& Dissonance::BaseCommsTrigger::__cordl_internal_get_Log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
constexpr void Dissonance::BaseCommsTrigger::__cordl_internal_set_Log(::Dissonance::Log*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Log = value;
}
constexpr bool& Dissonance::BaseCommsTrigger::__cordl_internal_get__wasColliderTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasColliderTriggered;
}
constexpr bool const& Dissonance::BaseCommsTrigger::__cordl_internal_get__wasColliderTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasColliderTriggered;
}
constexpr void Dissonance::BaseCommsTrigger::__cordl_internal_set__wasColliderTriggered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasColliderTriggered = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Dissonance::BaseCommsTrigger::__cordl_internal_get__entitiesInCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entitiesInCollider;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Dissonance::BaseCommsTrigger::__cordl_internal_get__entitiesInCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entitiesInCollider;
}
constexpr void Dissonance::BaseCommsTrigger::__cordl_internal_set__entitiesInCollider(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entitiesInCollider = value;
}
constexpr ::Dissonance::TokenSet*& Dissonance::BaseCommsTrigger::__cordl_internal_get__tokens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokens;
}
constexpr ::Dissonance::TokenSet* const& Dissonance::BaseCommsTrigger::__cordl_internal_get__tokens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokens;
}
constexpr void Dissonance::BaseCommsTrigger::__cordl_internal_set__tokens(::Dissonance::TokenSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokens = value;
}
constexpr ::System::Nullable_1<bool>& Dissonance::BaseCommsTrigger::__cordl_internal_get__cachedTokenActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTokenActivation;
}
constexpr ::System::Nullable_1<bool> const& Dissonance::BaseCommsTrigger::__cordl_internal_get__cachedTokenActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTokenActivation;
}
constexpr void Dissonance::BaseCommsTrigger::__cordl_internal_set__cachedTokenActivation(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTokenActivation = value;
}
constexpr ::UnityW<::Dissonance::DissonanceComms>& Dissonance::BaseCommsTrigger::__cordl_internal_get__comms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comms;
}
constexpr ::UnityW<::Dissonance::DissonanceComms> const& Dissonance::BaseCommsTrigger::__cordl_internal_get__comms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comms;
}
constexpr void Dissonance::BaseCommsTrigger::__cordl_internal_set__comms(::UnityW<::Dissonance::DissonanceComms>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comms = value;
}
inline bool Dissonance::BaseCommsTrigger::get_UseColliderTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::set_UseColliderTrigger(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::BaseCommsTrigger::get_CanTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::BaseCommsTrigger::get_IsColliderTriggered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"get_IsColliderTriggered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Dissonance::BaseCommsTrigger::get_Tokens()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"get_Tokens", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::UnityW<::Dissonance::DissonanceComms> Dissonance::BaseCommsTrigger::get_Comms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"get_Comms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Dissonance::DissonanceComms>>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::set_Comms(::Dissonance::DissonanceComms*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"set_Comms", {}, {::i2c::type_of<::Dissonance::DissonanceComms*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::BaseCommsTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::TokensModified(::StringW  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline bool Dissonance::BaseCommsTrigger::get_TokenActivationState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"get_TokenActivationState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::BaseCommsTrigger::ContainsToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"ContainsToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::BaseCommsTrigger::AddToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"AddToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::BaseCommsTrigger::RemoveToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"RemoveToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline void Dissonance::BaseCommsTrigger::ColliderTriggerChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseCommsTrigger::OnTriggerEnter2D(::UnityEngine::Collider2D*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"OnTriggerEnter2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Dissonance::BaseCommsTrigger::OnTriggerExit2D(::UnityEngine::Collider2D*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"OnTriggerExit2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Dissonance::BaseCommsTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Dissonance::BaseCommsTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool Dissonance::BaseCommsTrigger::ColliderTriggerFilter(::UnityEngine::Collider*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Dissonance::BaseCommsTrigger::ColliderTriggerFilter2D(::UnityEngine::Collider2D*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseCommsTrigger*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::UnityW<::Dissonance::DissonanceComms> Dissonance::BaseCommsTrigger::FindLocalVoiceComm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"FindLocalVoiceComm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Dissonance::DissonanceComms>>(this, ___internal_method);
}
inline bool Dissonance::BaseCommsTrigger::CheckVoiceComm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseCommsTrigger*>(),
                        {"CheckVoiceComm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Dissonance::BaseCommsTrigger* Dissonance::BaseCommsTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::BaseCommsTrigger*>());
}
/// @brief Convert operator to "::Dissonance::IAccessTokenCollection"
constexpr  Dissonance::BaseCommsTrigger::operator ::Dissonance::IAccessTokenCollection*() noexcept {
return static_cast<::Dissonance::IAccessTokenCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::IAccessTokenCollection"
constexpr ::Dissonance::IAccessTokenCollection* Dissonance::BaseCommsTrigger::i___Dissonance__IAccessTokenCollection() noexcept {
return static_cast<::Dissonance::IAccessTokenCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::BaseCommsTrigger::BaseCommsTrigger()   {
}
