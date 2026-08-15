#pragma once
// IWYU pragma private; include "HouseHouse/Dream/DreamController.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "HouseHouse/Dream/zzzz__DreamController_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemBlock_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "HouseHouse/Dream/zzzz__DreamController_def.hpp"
#include "HouseHouse/Dream/zzzz__Dream_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::HouseHouse::Dream::DreamController_LookIdTrio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController_LookIdTrio::*)(uint8_t, uint8_t, uint8_t)>(&::HouseHouse::Dream::DreamController_LookIdTrio::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803cd660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController_LookIdTrio.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HouseHouse::Dream::DreamController_LookIdTrio::*)(::HouseHouse::Dream::DreamController_LookIdTrio)>(&::HouseHouse::Dream::DreamController_LookIdTrio::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803cd570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                        {"Equals", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController_LookIdTrio.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HouseHouse::Dream::DreamController_LookIdTrio::*)(::System::Object*)>(&::HouseHouse::Dream::DreamController_LookIdTrio::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803cd5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                    {::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController_LookIdTrio.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HouseHouse::Dream::DreamController_LookIdTrio::*)()>(&::HouseHouse::Dream::DreamController_LookIdTrio::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803cd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                    {::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController_LookIdTrio.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::HouseHouse::Dream::DreamController_LookIdTrio, ::HouseHouse::Dream::DreamController_LookIdTrio)>(&::HouseHouse::Dream::DreamController_LookIdTrio::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cd680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                        {"op_Equality", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController_LookIdTrio.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::HouseHouse::Dream::DreamController_LookIdTrio, ::HouseHouse::Dream::DreamController_LookIdTrio)>(&::HouseHouse::Dream::DreamController_LookIdTrio::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cd6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                        {"op_Inequality", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
    return ___internal_method;
  }
};
inline void HouseHouse::Dream::DreamController_LookIdTrio::_ctor(uint8_t  lookIdHead, uint8_t  lookIdTorso, uint8_t  lookIdLegs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lookIdHead, lookIdTorso, lookIdLegs);
}
inline bool HouseHouse::Dream::DreamController_LookIdTrio::Equals(::HouseHouse::Dream::DreamController_LookIdTrio  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                        {"Equals", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool HouseHouse::Dream::DreamController_LookIdTrio::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t HouseHouse::Dream::DreamController_LookIdTrio::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool HouseHouse::Dream::DreamController_LookIdTrio::op_Equality(::HouseHouse::Dream::DreamController_LookIdTrio  left, ::HouseHouse::Dream::DreamController_LookIdTrio  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                        {"op_Equality", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool HouseHouse::Dream::DreamController_LookIdTrio::op_Inequality(::HouseHouse::Dream::DreamController_LookIdTrio  left, ::HouseHouse::Dream::DreamController_LookIdTrio  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController_LookIdTrio>(),
                        {"op_Inequality", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters [CppParam { name: "lookIdHead", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lookIdTorso", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lookIdLegs", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HouseHouse::Dream::DreamController_LookIdTrio::DreamController_LookIdTrio(uint8_t  lookIdHead, uint8_t  lookIdTorso, uint8_t  lookIdLegs) noexcept  {
this->lookIdHead = lookIdHead;
this->lookIdTorso = lookIdTorso;
this->lookIdLegs = lookIdLegs;
}
// Ctor Parameters []
constexpr ::HouseHouse::Dream::DreamController_LookIdTrio::DreamController_LookIdTrio()   {
}
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)()>(&::HouseHouse::Dream::DreamController::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803bfea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.GetDreamPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::HouseHouse::Dream::DreamController::*)(::by_ref<::GlobalNamespace::PlayerCharacter*>, ::by_ref<::GlobalNamespace::PlayerCharacter*>)>(&::HouseHouse::Dream::DreamController::GetDreamPlayer)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1803c01f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"GetDreamPlayer", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::PlayerCharacter*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlayerCharacter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.OnStartDreamPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)(::GlobalNamespace::PeckContext)>(&::HouseHouse::Dream::DreamController::OnStartDreamPeck)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1803c0600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"OnStartDreamPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.OnSetColor1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)(::HouseHouse::Dream::DreamController_LookIdTrio, ::HouseHouse::Dream::DreamController_LookIdTrio)>(&::HouseHouse::Dream::DreamController::OnSetColor1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803c0520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"OnSetColor1", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.OnSetColor2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)(::HouseHouse::Dream::DreamController_LookIdTrio, ::HouseHouse::Dream::DreamController_LookIdTrio)>(&::HouseHouse::Dream::DreamController::OnSetColor2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803c0590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"OnSetColor2", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)()>(&::HouseHouse::Dream::DreamController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)()>(&::HouseHouse::Dream::DreamController::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.get_Networkfriend1Looks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HouseHouse::Dream::DreamController_LookIdTrio (::HouseHouse::Dream::DreamController::*)()>(&::HouseHouse::Dream::DreamController::get_Networkfriend1Looks)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c0980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"get_Networkfriend1Looks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.set_Networkfriend1Looks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)(::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>)>(&::HouseHouse::Dream::DreamController::set_Networkfriend1Looks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803c09c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"set_Networkfriend1Looks", {}, {::i2c::type_of<::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.get_Networkfriend2Looks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HouseHouse::Dream::DreamController_LookIdTrio (::HouseHouse::Dream::DreamController::*)()>(&::HouseHouse::Dream::DreamController::get_Networkfriend2Looks)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c09a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"get_Networkfriend2Looks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.set_Networkfriend2Looks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)(::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>)>(&::HouseHouse::Dream::DreamController::set_Networkfriend2Looks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803c0a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"set_Networkfriend2Looks", {}, {::i2c::type_of<::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)(::Mirror::NetworkWriter*, bool)>(&::HouseHouse::Dream::DreamController::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803c0880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                    {::i2c::class_of<::HouseHouse::Dream::DreamController*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::DreamController.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamController::*)(::Mirror::NetworkReader*, bool)>(&::HouseHouse::Dream::DreamController::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1803bfef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                    {::i2c::class_of<::HouseHouse::Dream::DreamController*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& HouseHouse::Dream::DreamController::__cordl_internal_get_startDreamSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startDreamSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& HouseHouse::Dream::DreamController::__cordl_internal_get_startDreamSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startDreamSystem;
}
constexpr void HouseHouse::Dream::DreamController::__cordl_internal_set_startDreamSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startDreamSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& HouseHouse::Dream::DreamController::__cordl_internal_get_inputBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBlock;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& HouseHouse::Dream::DreamController::__cordl_internal_get_inputBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBlock;
}
constexpr void HouseHouse::Dream::DreamController::__cordl_internal_set_inputBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputBlock = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& HouseHouse::Dream::DreamController::__cordl_internal_get_candidates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidates;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& HouseHouse::Dream::DreamController::__cordl_internal_get_candidates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidates;
}
constexpr void HouseHouse::Dream::DreamController::__cordl_internal_set_candidates(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candidates = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& HouseHouse::Dream::DreamController::__cordl_internal_get_dreamPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamPlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& HouseHouse::Dream::DreamController::__cordl_internal_get_dreamPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamPlayer;
}
constexpr void HouseHouse::Dream::DreamController::__cordl_internal_set_dreamPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamPlayer = value;
}
constexpr ::UnityW<::HouseHouse::Dream::Dream>& HouseHouse::Dream::DreamController::__cordl_internal_get_dream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dream;
}
constexpr ::UnityW<::HouseHouse::Dream::Dream> const& HouseHouse::Dream::DreamController::__cordl_internal_get_dream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dream;
}
constexpr void HouseHouse::Dream::DreamController::__cordl_internal_set_dream(::UnityW<::HouseHouse::Dream::Dream>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dream = value;
}
constexpr ::HouseHouse::Dream::DreamController_LookIdTrio& HouseHouse::Dream::DreamController::__cordl_internal_get_friend1Looks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friend1Looks;
}
constexpr ::HouseHouse::Dream::DreamController_LookIdTrio const& HouseHouse::Dream::DreamController::__cordl_internal_get_friend1Looks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friend1Looks;
}
constexpr void HouseHouse::Dream::DreamController::__cordl_internal_set_friend1Looks(::HouseHouse::Dream::DreamController_LookIdTrio  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friend1Looks = value;
}
constexpr ::HouseHouse::Dream::DreamController_LookIdTrio& HouseHouse::Dream::DreamController::__cordl_internal_get_friend2Looks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friend2Looks;
}
constexpr ::HouseHouse::Dream::DreamController_LookIdTrio const& HouseHouse::Dream::DreamController::__cordl_internal_get_friend2Looks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friend2Looks;
}
constexpr void HouseHouse::Dream::DreamController::__cordl_internal_set_friend2Looks(::HouseHouse::Dream::DreamController_LookIdTrio  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friend2Looks = value;
}
inline void HouseHouse::Dream::DreamController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> HouseHouse::Dream::DreamController::GetDreamPlayer(::by_ref<::GlobalNamespace::PlayerCharacter*>  friend1, ::by_ref<::GlobalNamespace::PlayerCharacter*>  friend2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"GetDreamPlayer", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::PlayerCharacter*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlayerCharacter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method, friend1, friend2);
}
inline void HouseHouse::Dream::DreamController::OnStartDreamPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"OnStartDreamPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void HouseHouse::Dream::DreamController::OnSetColor1(::HouseHouse::Dream::DreamController_LookIdTrio  oldValue, ::HouseHouse::Dream::DreamController_LookIdTrio  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"OnSetColor1", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void HouseHouse::Dream::DreamController::OnSetColor2(::HouseHouse::Dream::DreamController_LookIdTrio  oldValue, ::HouseHouse::Dream::DreamController_LookIdTrio  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"OnSetColor2", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void HouseHouse::Dream::DreamController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Dream::DreamController::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Dream::DreamController_LookIdTrio HouseHouse::Dream::DreamController::get_Networkfriend1Looks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"get_Networkfriend1Looks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HouseHouse::Dream::DreamController_LookIdTrio>(this, ___internal_method);
}
inline void HouseHouse::Dream::DreamController::set_Networkfriend1Looks(::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"set_Networkfriend1Looks", {}, {::i2c::type_of<::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HouseHouse::Dream::DreamController_LookIdTrio HouseHouse::Dream::DreamController::get_Networkfriend2Looks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"get_Networkfriend2Looks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HouseHouse::Dream::DreamController_LookIdTrio>(this, ___internal_method);
}
inline void HouseHouse::Dream::DreamController::set_Networkfriend2Looks(::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamController*>(),
                        {"set_Networkfriend2Looks", {}, {::i2c::type_of<::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HouseHouse::Dream::DreamController::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HouseHouse::Dream::DreamController*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void HouseHouse::Dream::DreamController::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HouseHouse::Dream::DreamController*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::HouseHouse::Dream::DreamController* HouseHouse::Dream::DreamController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Dream::DreamController*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Dream::DreamController::DreamController()   {
}
