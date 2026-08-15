#pragma once
// IWYU pragma private; include "GlobalNamespace/RewardGourd.hpp"
#include "GlobalNamespace/zzzz__GourdFlag_impl.hpp"
#include "GlobalNamespace/zzzz__PropBlock_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__RewardGourd_def.hpp"
#include "GlobalNamespace/zzzz__GourdFlag_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)()>(&::GlobalNamespace::RewardGourd::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180408640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)(bool)>(&::GlobalNamespace::RewardGourd::OnSpawn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180408900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"OnSpawn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.GetMapPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::RewardGourd::*)()>(&::GlobalNamespace::RewardGourd::GetMapPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180408840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"GetMapPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.OnChangeGourdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)(::GlobalNamespace::GourdFlag_GourdState, ::GlobalNamespace::GourdFlag_GourdState)>(&::GlobalNamespace::RewardGourd::OnChangeGourdState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804088a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"OnChangeGourdState", {}, {::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>(), ::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.ServerSetGourdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)(::GlobalNamespace::GourdFlag_GourdState)>(&::GlobalNamespace::RewardGourd::ServerSetGourdState)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180408970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"ServerSetGourdState", {}, {::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)()>(&::GlobalNamespace::RewardGourd::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)()>(&::GlobalNamespace::RewardGourd::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.get_NetworkgourdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GourdFlag_GourdState (::GlobalNamespace::RewardGourd::*)()>(&::GlobalNamespace::RewardGourd::get_NetworkgourdState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180408b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"get_NetworkgourdState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.set_NetworkgourdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)(::ByRefConst<::GlobalNamespace::GourdFlag_GourdState>)>(&::GlobalNamespace::RewardGourd::set_NetworkgourdState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180408b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"set_NetworkgourdState", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::GourdFlag_GourdState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::RewardGourd::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180408920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                    {::i2c::class_of<::GlobalNamespace::RewardGourd*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewardGourd.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RewardGourd::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::RewardGourd::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180408760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                    {::i2c::class_of<::GlobalNamespace::RewardGourd*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::RewardGourd::__cordl_internal_get_prop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::RewardGourd::__cordl_internal_get_prop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr void GlobalNamespace::RewardGourd::__cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prop = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RewardGourd::__cordl_internal_get_customMapPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RewardGourd::__cordl_internal_get_customMapPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapPosition;
}
constexpr void GlobalNamespace::RewardGourd::__cordl_internal_set_customMapPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapPosition = value;
}
constexpr bool& GlobalNamespace::RewardGourd::__cordl_internal_get_isVariantChallenge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVariantChallenge;
}
constexpr bool const& GlobalNamespace::RewardGourd::__cordl_internal_get_isVariantChallenge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVariantChallenge;
}
constexpr void GlobalNamespace::RewardGourd::__cordl_internal_set_isVariantChallenge(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isVariantChallenge = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::RewardGourd::__cordl_internal_get_variantChallengeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variantChallengeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::RewardGourd::__cordl_internal_get_variantChallengeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variantChallengeColor;
}
constexpr void GlobalNamespace::RewardGourd::__cordl_internal_set_variantChallengeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___variantChallengeColor = value;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& GlobalNamespace::RewardGourd::__cordl_internal_get_propertyBlockHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& GlobalNamespace::RewardGourd::__cordl_internal_get_propertyBlockHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr void GlobalNamespace::RewardGourd::__cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelper = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropBlock>>& GlobalNamespace::RewardGourd::__cordl_internal_get_propsToMakeSavable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propsToMakeSavable;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropBlock>> const& GlobalNamespace::RewardGourd::__cordl_internal_get_propsToMakeSavable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propsToMakeSavable;
}
constexpr void GlobalNamespace::RewardGourd::__cordl_internal_set_propsToMakeSavable(::ArrayW<::UnityW<::GlobalNamespace::PropBlock>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propsToMakeSavable = value;
}
constexpr ::GlobalNamespace::GourdFlag_GourdState& GlobalNamespace::RewardGourd::__cordl_internal_get_gourdState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdState;
}
constexpr ::GlobalNamespace::GourdFlag_GourdState const& GlobalNamespace::RewardGourd::__cordl_internal_get_gourdState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdState;
}
constexpr void GlobalNamespace::RewardGourd::__cordl_internal_set_gourdState(::GlobalNamespace::GourdFlag_GourdState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gourdState = value;
}
inline void GlobalNamespace::RewardGourd::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RewardGourd::OnSpawn(bool  isInventory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"OnSpawn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isInventory);
}
inline ::UnityEngine::Vector3 GlobalNamespace::RewardGourd::GetMapPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"GetMapPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::RewardGourd::OnChangeGourdState(::GlobalNamespace::GourdFlag_GourdState  oldValue, ::GlobalNamespace::GourdFlag_GourdState  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"OnChangeGourdState", {}, {::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>(), ::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::RewardGourd::ServerSetGourdState(::GlobalNamespace::GourdFlag_GourdState  newGourdState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"ServerSetGourdState", {}, {::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGourdState);
}
inline void GlobalNamespace::RewardGourd::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RewardGourd::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GourdFlag_GourdState GlobalNamespace::RewardGourd::get_NetworkgourdState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"get_NetworkgourdState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GourdFlag_GourdState>(this, ___internal_method);
}
inline void GlobalNamespace::RewardGourd::set_NetworkgourdState(::ByRefConst<::GlobalNamespace::GourdFlag_GourdState>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewardGourd*>(),
                        {"set_NetworkgourdState", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::GourdFlag_GourdState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RewardGourd::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RewardGourd*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::RewardGourd::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RewardGourd*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::RewardGourd* GlobalNamespace::RewardGourd::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RewardGourd*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RewardGourd::RewardGourd()   {
}
