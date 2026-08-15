#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveTransformToClosestPosition.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MoveTransformToClosestPosition_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoveTransformToClosestPosition.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveTransformToClosestPosition::*)()>(&::GlobalNamespace::MoveTransformToClosestPosition::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveTransformToClosestPosition*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveTransformToClosestPosition.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveTransformToClosestPosition::*)()>(&::GlobalNamespace::MoveTransformToClosestPosition::Update)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1803d5ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveTransformToClosestPosition*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveTransformToClosestPosition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveTransformToClosestPosition::*)()>(&::GlobalNamespace::MoveTransformToClosestPosition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveTransformToClosestPosition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::MoveTransformToClosestPosition::__cordl_internal_get_PositionOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionOffsets;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::MoveTransformToClosestPosition::__cordl_internal_get_PositionOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionOffsets;
}
constexpr void GlobalNamespace::MoveTransformToClosestPosition::__cordl_internal_set_PositionOffsets(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionOffsets = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MoveTransformToClosestPosition::__cordl_internal_get_TransformToMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformToMove;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MoveTransformToClosestPosition::__cordl_internal_get_TransformToMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformToMove;
}
constexpr void GlobalNamespace::MoveTransformToClosestPosition::__cordl_internal_set_TransformToMove(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransformToMove = value;
}
inline void GlobalNamespace::MoveTransformToClosestPosition::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveTransformToClosestPosition*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoveTransformToClosestPosition::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveTransformToClosestPosition*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoveTransformToClosestPosition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveTransformToClosestPosition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MoveTransformToClosestPosition* GlobalNamespace::MoveTransformToClosestPosition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MoveTransformToClosestPosition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoveTransformToClosestPosition::MoveTransformToClosestPosition()   {
}
