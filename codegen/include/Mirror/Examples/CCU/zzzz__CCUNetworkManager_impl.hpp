#pragma once
// IWYU pragma private; include "Mirror/Examples/CCU/CCUNetworkManager.hpp"
#include "Mirror/zzzz__NetworkManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/Examples/CCU/zzzz__CCUNetworkManager_def.hpp"
#include "Mirror/Examples/CCU/zzzz__CCUNetworkManager_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::CCU::CCUNetworkManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::CCUNetworkManager___c::*)()>(&::Mirror::Examples::CCU::CCUNetworkManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::CCUNetworkManager___c._GetStartPosition_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Examples::CCU::CCUNetworkManager___c::*)(::UnityEngine::Transform*)>(&::Mirror::Examples::CCU::CCUNetworkManager___c::_GetStartPosition_b__6_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18143d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager___c*>(),
                        {"<GetStartPosition>b__6_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Examples::CCU::CCUNetworkManager___c::setStaticF___9(::Mirror::Examples::CCU::CCUNetworkManager___c*  value)  {
::cordl_internals::setStaticField<::Mirror::Examples::CCU::CCUNetworkManager___c*, "<>9", ::Mirror::Examples::CCU::CCUNetworkManager___c*>(std::forward<::Mirror::Examples::CCU::CCUNetworkManager___c*>(value));
}
inline ::Mirror::Examples::CCU::CCUNetworkManager___c* Mirror::Examples::CCU::CCUNetworkManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::Examples::CCU::CCUNetworkManager___c*, "<>9", ::Mirror::Examples::CCU::CCUNetworkManager___c*>();
}
inline void Mirror::Examples::CCU::CCUNetworkManager___c::setStaticF___9__6_0(::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*, "<>9__6_0", ::Mirror::Examples::CCU::CCUNetworkManager___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>* Mirror::Examples::CCU::CCUNetworkManager___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*, "<>9__6_0", ::Mirror::Examples::CCU::CCUNetworkManager___c*>();
}
inline void Mirror::Examples::CCU::CCUNetworkManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Examples::CCU::CCUNetworkManager___c::_GetStartPosition_b__6_0(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager___c*>(),
                        {"<GetStartPosition>b__6_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::Mirror::Examples::CCU::CCUNetworkManager___c* Mirror::Examples::CCU::CCUNetworkManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::CCU::CCUNetworkManager___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::CCU::CCUNetworkManager___c::CCUNetworkManager___c()   {
}
//  Writing Method size for method: ::Mirror::Examples::CCU::CCUNetworkManager.SpawnAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::CCUNetworkManager::*)()>(&::Mirror::Examples::CCU::CCUNetworkManager::SpawnAll)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x181553cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(),
                        {"SpawnAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::CCUNetworkManager.GetStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Mirror::Examples::CCU::CCUNetworkManager::*)()>(&::Mirror::Examples::CCU::CCUNetworkManager::GetStartPosition)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181553b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(),
                    {::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::CCUNetworkManager.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::CCUNetworkManager::*)()>(&::Mirror::Examples::CCU::CCUNetworkManager::OnStartServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181553cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(),
                    {::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::CCUNetworkManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::CCUNetworkManager::*)()>(&::Mirror::Examples::CCU::CCUNetworkManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181554030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_spawnAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAmount;
}
constexpr int32_t const& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_spawnAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAmount;
}
constexpr void Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_set_spawnAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnAmount = value;
}
constexpr float_t& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_interleave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interleave;
}
constexpr float_t const& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_interleave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interleave;
}
constexpr void Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_set_interleave(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interleave = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_spawnPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_spawnPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPrefab;
}
constexpr void Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_set_spawnPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPrefab = value;
}
constexpr float_t& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_spawnPositionRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPositionRatio;
}
constexpr float_t const& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_spawnPositionRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPositionRatio;
}
constexpr void Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_set_spawnPositionRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPositionRatio = value;
}
constexpr ::System::Random*& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr ::System::Random* const& Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_get_random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr void Mirror::Examples::CCU::CCUNetworkManager::__cordl_internal_set_random(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___random = value;
}
inline void Mirror::Examples::CCU::CCUNetworkManager::SpawnAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(),
                        {"SpawnAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Mirror::Examples::CCU::CCUNetworkManager::GetStartPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::CCUNetworkManager::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::CCUNetworkManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::CCUNetworkManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::CCU::CCUNetworkManager* Mirror::Examples::CCU::CCUNetworkManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::CCU::CCUNetworkManager*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::CCU::CCUNetworkManager::CCUNetworkManager()   {
}
