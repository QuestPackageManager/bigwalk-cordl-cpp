#pragma once
// IWYU pragma private; include "GlobalNamespace/Corpse.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Corpse_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__CorpseLooks_def.hpp"
#include "GlobalNamespace/zzzz__LimbSpline_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PropHomeGrasperPositioner_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Corpse.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803f9db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803f92e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803fa6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::OnDestroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f9e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.OnSetHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(int32_t, int32_t)>(&::GlobalNamespace::Corpse::OnSetHead)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803fa010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnSetHead", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.OnSetTorso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(int32_t, int32_t)>(&::GlobalNamespace::Corpse::OnSetTorso)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803fa0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnSetTorso", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.OnSetLegs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(int32_t, int32_t)>(&::GlobalNamespace::Corpse::OnSetLegs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803fa070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnSetLegs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.CreateAndSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Corpse> (*)(::GlobalNamespace::PlayerCharacter*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::Corpse::CreateAndSpawn)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1803f93c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"CreateAndSpawn", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803f9f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.EmptyPocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(::GlobalNamespace::PropHome*)>(&::GlobalNamespace::Corpse::EmptyPocket)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f9b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"EmptyPocket", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f9ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.FindMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Corpse> (*)(::StringW)>(&::GlobalNamespace::Corpse::FindMatch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803f9d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"FindMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.IsMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Corpse::*)(::StringW)>(&::GlobalNamespace::Corpse::IsMatch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f9e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"IsMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.ServerEmptyAllPockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::ServerEmptyAllPockets)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803fa4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"ServerEmptyAllPockets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.ExpireDueToRevival
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::Corpse::ExpireDueToRevival)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803f9ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"ExpireDueToRevival", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.RefreshLiveLimbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*)>(&::GlobalNamespace::Corpse::RefreshLiveLimbs)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1803fa130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"RefreshLiveLimbs", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.get_NetworkheadColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::get_NetworkheadColorIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"get_NetworkheadColorIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.set_NetworkheadColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::Corpse::set_NetworkheadColorIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803fa760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"set_NetworkheadColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.get_NetworktorsoColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::get_NetworktorsoColorIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"get_NetworktorsoColorIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.set_NetworktorsoColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::Corpse::set_NetworktorsoColorIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803fa840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"set_NetworktorsoColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.get_NetworklegsColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Corpse::*)()>(&::GlobalNamespace::Corpse::get_NetworklegsColorIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"get_NetworklegsColorIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.set_NetworklegsColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::Corpse::set_NetworklegsColorIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803fa7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"set_NetworklegsColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::Corpse::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803fa440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                    {::i2c::class_of<::GlobalNamespace::Corpse*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Corpse.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Corpse::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::Corpse::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1803f9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                    {::i2c::class_of<::GlobalNamespace::Corpse*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Corpse::__cordl_internal_get_headColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headColorIndex;
}
constexpr int32_t const& GlobalNamespace::Corpse::__cordl_internal_get_headColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headColorIndex;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_headColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headColorIndex = value;
}
constexpr int32_t& GlobalNamespace::Corpse::__cordl_internal_get_torsoColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoColorIndex;
}
constexpr int32_t const& GlobalNamespace::Corpse::__cordl_internal_get_torsoColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoColorIndex;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_torsoColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___torsoColorIndex = value;
}
constexpr int32_t& GlobalNamespace::Corpse::__cordl_internal_get_legsColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsColorIndex;
}
constexpr int32_t const& GlobalNamespace::Corpse::__cordl_internal_get_legsColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsColorIndex;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_legsColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legsColorIndex = value;
}
constexpr ::StringW& GlobalNamespace::Corpse::__cordl_internal_get_identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifier;
}
constexpr ::StringW const& GlobalNamespace::Corpse::__cordl_internal_get_identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifier;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_identifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___identifier = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::Corpse::__cordl_internal_get_baseMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::Corpse::__cordl_internal_get_baseMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMaterial;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseMaterial = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::Corpse::__cordl_internal_get_prop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::Corpse::__cordl_internal_get_prop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prop = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::Corpse::__cordl_internal_get_backpackHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::Corpse::__cordl_internal_get_backpackHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackHome;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_backpackHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backpackHome = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::Corpse::__cordl_internal_get_holsterHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::Corpse::__cordl_internal_get_holsterHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterHome;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_holsterHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holsterHome = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::Corpse::__cordl_internal_get_grasperHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grasperHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::Corpse::__cordl_internal_get_grasperHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grasperHome;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_grasperHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grasperHome = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::Corpse::__cordl_internal_get_blindfoldHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blindfoldHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::Corpse::__cordl_internal_get_blindfoldHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blindfoldHome;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_blindfoldHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blindfoldHome = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Corpse::__cordl_internal_get_liveLimbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liveLimbs;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Corpse::__cordl_internal_get_liveLimbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liveLimbs;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_liveLimbs(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liveLimbs = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Corpse::__cordl_internal_get_deadLimbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadLimbs;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Corpse::__cordl_internal_get_deadLimbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadLimbs;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_deadLimbs(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deadLimbs = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::Corpse::__cordl_internal_get_leftArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArm;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::Corpse::__cordl_internal_get_leftArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArm;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_leftArm(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArm = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::Corpse::__cordl_internal_get_rightArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArm;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::Corpse::__cordl_internal_get_rightArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArm;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_rightArm(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArm = value;
}
constexpr ::UnityW<::GlobalNamespace::CorpseLooks>& GlobalNamespace::Corpse::__cordl_internal_get_corpseLooks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpseLooks;
}
constexpr ::UnityW<::GlobalNamespace::CorpseLooks> const& GlobalNamespace::Corpse::__cordl_internal_get_corpseLooks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpseLooks;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_corpseLooks(::UnityW<::GlobalNamespace::CorpseLooks>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corpseLooks = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHomeGrasperPositioner>& GlobalNamespace::Corpse::__cordl_internal_get_grasperPositioner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grasperPositioner;
}
constexpr ::UnityW<::GlobalNamespace::PropHomeGrasperPositioner> const& GlobalNamespace::Corpse::__cordl_internal_get_grasperPositioner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grasperPositioner;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_grasperPositioner(::UnityW<::GlobalNamespace::PropHomeGrasperPositioner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grasperPositioner = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::Corpse::__cordl_internal_get_deathSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deathSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::Corpse::__cordl_internal_get_deathSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deathSound;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_deathSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deathSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::Corpse::__cordl_internal_get_reviveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::Corpse::__cordl_internal_get_reviveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveSound;
}
constexpr void GlobalNamespace::Corpse::__cordl_internal_set_reviveSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveSound = value;
}
inline void GlobalNamespace::Corpse::setStaticF_allCorpses(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Corpse>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Corpse>>*, "allCorpses", ::GlobalNamespace::Corpse*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Corpse>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Corpse>>* GlobalNamespace::Corpse::getStaticF_allCorpses()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Corpse>>*, "allCorpses", ::GlobalNamespace::Corpse*>();
}
inline void GlobalNamespace::Corpse::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::OnSetHead(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnSetHead", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::Corpse::OnSetTorso(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnSetTorso", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::Corpse::OnSetLegs(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnSetLegs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline ::UnityW<::GlobalNamespace::Corpse> GlobalNamespace::Corpse::CreateAndSpawn(::GlobalNamespace::PlayerCharacter*  sourcePlayer, ::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"CreateAndSpawn", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Corpse>>(nullptr, ___internal_method, sourcePlayer, prefab);
}
inline void GlobalNamespace::Corpse::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::EmptyPocket(::GlobalNamespace::PropHome*  pocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"EmptyPocket", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pocket);
}
inline void GlobalNamespace::Corpse::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::Corpse> GlobalNamespace::Corpse::FindMatch(::StringW  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"FindMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Corpse>>(nullptr, ___internal_method, identifier);
}
inline bool GlobalNamespace::Corpse::IsMatch(::StringW  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"IsMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identifier);
}
inline void GlobalNamespace::Corpse::ServerEmptyAllPockets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"ServerEmptyAllPockets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::ExpireDueToRevival(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"ExpireDueToRevival", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::Corpse::RefreshLiveLimbs(::GlobalNamespace::PropHome*  home, ::GlobalNamespace::Prop*  oldProp, ::GlobalNamespace::Prop*  newProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"RefreshLiveLimbs", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, home, oldProp, newProp);
}
inline void GlobalNamespace::Corpse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::Corpse::get_NetworkheadColorIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"get_NetworkheadColorIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::set_NetworkheadColorIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"set_NetworkheadColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::Corpse::get_NetworktorsoColorIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"get_NetworktorsoColorIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::set_NetworktorsoColorIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"set_NetworktorsoColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::Corpse::get_NetworklegsColorIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"get_NetworklegsColorIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::Corpse::set_NetworklegsColorIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Corpse*>(),
                        {"set_NetworklegsColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Corpse::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Corpse*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::Corpse::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Corpse*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::Corpse* GlobalNamespace::Corpse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Corpse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Corpse::Corpse()   {
}
