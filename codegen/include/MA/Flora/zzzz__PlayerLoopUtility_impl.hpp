#pragma once
// IWYU pragma private; include "MA/Flora/PlayerLoopUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__PlayerLoopUtility_def.hpp"
#include "MA/Flora/zzzz__PlayerLoopUtility_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::PlayerLoopUtility_AddMode::PlayerLoopUtility_AddMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::PlayerLoopUtility_AddMode::PlayerLoopUtility_AddMode()   {
}
constexpr ::MA::Flora::PlayerLoopUtility_AddMode  MA::Flora::PlayerLoopUtility_AddMode::Beginning{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::PlayerLoopUtility_AddMode  MA::Flora::PlayerLoopUtility_AddMode::End{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::MA::Flora::PlayerLoopUtility.TryAddToPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, ::System::Type*, ::System::Type*, ::MA::Flora::PlayerLoopUtility_AddMode)>(&::MA::Flora::PlayerLoopUtility::TryAddToPlayerLoop)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18150c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"TryAddToPlayerLoop", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::Flora::PlayerLoopUtility_AddMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PlayerLoopUtility.TryAddToPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, ::System::Type*, ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::System::Type*, ::MA::Flora::PlayerLoopUtility_AddMode)>(&::MA::Flora::PlayerLoopUtility::TryAddToPlayerLoop)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18150c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"TryAddToPlayerLoop", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::Flora::PlayerLoopUtility_AddMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PlayerLoopUtility.TryRemoveLoopSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::MA::Flora::PlayerLoopUtility::TryRemoveLoopSystem)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18150c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"TryRemoveLoopSystem", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PlayerLoopUtility.TryRemoveLoopSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::System::Type*)>(&::MA::Flora::PlayerLoopUtility::TryRemoveLoopSystem)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18150c6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"TryRemoveLoopSystem", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PlayerLoopUtility.FindSystemPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>, ::System::Type*)>(&::MA::Flora::PlayerLoopUtility::FindSystemPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18150c290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"FindSystemPosition", {}, {::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PlayerLoopUtility.RemoveSystemAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, int32_t)>(&::MA::Flora::PlayerLoopUtility::RemoveSystemAt)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18150c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"RemoveSystemAt", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::PlayerLoopUtility::TryAddToPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function, ::System::Type*  ownerType, ::System::Type*  playerLoopSystemType, ::MA::Flora::PlayerLoopUtility_AddMode  addMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"TryAddToPlayerLoop", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::Flora::PlayerLoopUtility_AddMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, function, ownerType, playerLoopSystemType, addMode);
}
inline bool MA::Flora::PlayerLoopUtility::TryAddToPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function, ::System::Type*  ownerType, ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  playerLoop, ::System::Type*  playerLoopSystemType, ::MA::Flora::PlayerLoopUtility_AddMode  addMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"TryAddToPlayerLoop", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::Flora::PlayerLoopUtility_AddMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, function, ownerType, playerLoop, playerLoopSystemType, addMode);
}
inline bool MA::Flora::PlayerLoopUtility::TryRemoveLoopSystem(::System::Type*  childSystemType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"TryRemoveLoopSystem", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, childSystemType);
}
inline bool MA::Flora::PlayerLoopUtility::TryRemoveLoopSystem(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  parentLoopSystem, ::System::Type*  childSystemType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"TryRemoveLoopSystem", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, parentLoopSystem, childSystemType);
}
inline int32_t MA::Flora::PlayerLoopUtility::FindSystemPosition(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>  subSystemList, ::System::Type*  systemType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"FindSystemPosition", {}, {::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, subSystemList, systemType);
}
inline void MA::Flora::PlayerLoopUtility::RemoveSystemAt(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  parentLoopSystem, int32_t  systemPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PlayerLoopUtility*>(),
                        {"RemoveSystemAt", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parentLoopSystem, systemPosition);
}
// Ctor Parameters []
constexpr ::MA::Flora::PlayerLoopUtility::PlayerLoopUtility()   {
}
