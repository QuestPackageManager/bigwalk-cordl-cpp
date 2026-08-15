#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColliderHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColliderHelpers.GetLowestPointOnColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*)>(&::GlobalNamespace::ColliderHelpers::GetLowestPointOnColliders)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18037c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderHelpers*>(),
                        {"GetLowestPointOnColliders", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::ColliderHelpers::GetLowestPointOnColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderHelpers*>(),
                        {"GetLowestPointOnColliders", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, colliders);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderHelpers::ColliderHelpers()   {
}
