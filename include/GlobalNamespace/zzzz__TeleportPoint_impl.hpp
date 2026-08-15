#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportPoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TeleportPoint_def.hpp"
#include "GlobalNamespace/zzzz__TeleportPoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportPoint___c::*)()>(&::GlobalNamespace::TeleportPoint___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint___c._SortListIfNeeded_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TeleportPoint___c::*)(::GlobalNamespace::TeleportPoint*, ::GlobalNamespace::TeleportPoint*)>(&::GlobalNamespace::TeleportPoint___c::_SortListIfNeeded_b__11_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f25a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint___c*>(),
                        {"<SortListIfNeeded>b__11_0", {}, {::i2c::type_of<::GlobalNamespace::TeleportPoint*>(), ::i2c::type_of<::GlobalNamespace::TeleportPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TeleportPoint___c::setStaticF___9(::GlobalNamespace::TeleportPoint___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TeleportPoint___c*, "<>9", ::GlobalNamespace::TeleportPoint___c*>(std::forward<::GlobalNamespace::TeleportPoint___c*>(value));
}
inline ::GlobalNamespace::TeleportPoint___c* GlobalNamespace::TeleportPoint___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TeleportPoint___c*, "<>9", ::GlobalNamespace::TeleportPoint___c*>();
}
inline void GlobalNamespace::TeleportPoint___c::setStaticF___9__11_0(::System::Comparison_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::TeleportPoint>>*, "<>9__11_0", ::GlobalNamespace::TeleportPoint___c*>(std::forward<::System::Comparison_1<::UnityW<::GlobalNamespace::TeleportPoint>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::GlobalNamespace::TeleportPoint>>* GlobalNamespace::TeleportPoint___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::TeleportPoint>>*, "<>9__11_0", ::GlobalNamespace::TeleportPoint___c*>();
}
inline void GlobalNamespace::TeleportPoint___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TeleportPoint___c::_SortListIfNeeded_b__11_0(::GlobalNamespace::TeleportPoint*  teleport1, ::GlobalNamespace::TeleportPoint*  teleport2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint___c*>(),
                        {"<SortListIfNeeded>b__11_0", {}, {::i2c::type_of<::GlobalNamespace::TeleportPoint*>(), ::i2c::type_of<::GlobalNamespace::TeleportPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, teleport1, teleport2);
}
inline ::GlobalNamespace::TeleportPoint___c* GlobalNamespace::TeleportPoint___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportPoint___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportPoint___c::TeleportPoint___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint.get_sortName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TeleportPoint::*)()>(&::GlobalNamespace::TeleportPoint::get_sortName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f1bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"get_sortName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportPoint::*)()>(&::GlobalNamespace::TeleportPoint::OnValidate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803f19b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportPoint::*)()>(&::GlobalNamespace::TeleportPoint::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803f1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportPoint::*)()>(&::GlobalNamespace::TeleportPoint::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f1720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint.SortListIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::TeleportPoint::SortListIfNeeded)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803f1ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"SortListIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint.OnTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TeleportPoint*)>(&::GlobalNamespace::TeleportPoint::OnTeleport)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803f1980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnTeleport", {}, {::i2c::type_of<::GlobalNamespace::TeleportPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportPoint::*)()>(&::GlobalNamespace::TeleportPoint::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803f1770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportPoint::*)()>(&::GlobalNamespace::TeleportPoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TeleportPoint::__cordl_internal_get_customName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customName;
}
constexpr ::StringW const& GlobalNamespace::TeleportPoint::__cordl_internal_get_customName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customName;
}
constexpr void GlobalNamespace::TeleportPoint::__cordl_internal_set_customName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customName = value;
}
constexpr ::StringW& GlobalNamespace::TeleportPoint::__cordl_internal_get_cheatCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatCode;
}
constexpr ::StringW const& GlobalNamespace::TeleportPoint::__cordl_internal_get_cheatCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatCode;
}
constexpr void GlobalNamespace::TeleportPoint::__cordl_internal_set_cheatCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cheatCode = value;
}
constexpr bool& GlobalNamespace::TeleportPoint::__cordl_internal_get_teleportAtSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportAtSpawn;
}
constexpr bool const& GlobalNamespace::TeleportPoint::__cordl_internal_get_teleportAtSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportAtSpawn;
}
constexpr void GlobalNamespace::TeleportPoint::__cordl_internal_set_teleportAtSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportAtSpawn = value;
}
inline void GlobalNamespace::TeleportPoint::setStaticF_allPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportPoint>>*, "allPoints", ::GlobalNamespace::TeleportPoint*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportPoint>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportPoint>>* GlobalNamespace::TeleportPoint::getStaticF_allPoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportPoint>>*, "allPoints", ::GlobalNamespace::TeleportPoint*>();
}
inline void GlobalNamespace::TeleportPoint::setStaticF_listIsSorted(bool  value)  {
::cordl_internals::setStaticField<bool, "listIsSorted", ::GlobalNamespace::TeleportPoint*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::TeleportPoint::getStaticF_listIsSorted()  {
return ::cordl_internals::getStaticField<bool, "listIsSorted", ::GlobalNamespace::TeleportPoint*>();
}
inline void GlobalNamespace::TeleportPoint::setStaticF_onTeleport(::System::Action_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::TeleportPoint>>*, "onTeleport", ::GlobalNamespace::TeleportPoint*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::TeleportPoint>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::TeleportPoint>>* GlobalNamespace::TeleportPoint::getStaticF_onTeleport()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::TeleportPoint>>*, "onTeleport", ::GlobalNamespace::TeleportPoint*>();
}
inline ::StringW GlobalNamespace::TeleportPoint::get_sortName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"get_sortName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportPoint::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportPoint::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportPoint::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportPoint::SortListIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"SortListIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TeleportPoint::OnTeleport(::GlobalNamespace::TeleportPoint*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnTeleport", {}, {::i2c::type_of<::GlobalNamespace::TeleportPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination);
}
inline void GlobalNamespace::TeleportPoint::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeleportPoint* GlobalNamespace::TeleportPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportPoint::TeleportPoint()   {
}
