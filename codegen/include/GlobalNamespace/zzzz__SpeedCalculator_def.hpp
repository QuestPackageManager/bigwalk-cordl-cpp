#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeedCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpeedCalculator)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SpeedCalculator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpeedCalculator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeedCalculator*, "", "SpeedCalculator");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeedCalculator
class CORDL_TYPE SpeedCalculator : public ::System::Object {
public:
// Declarations
/// @brief Field bufferSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferSize, put=__cordl_internal_set_bufferSize)) int32_t  bufferSize;

/// @brief Field index, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field isBufferFull, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBufferFull, put=__cordl_internal_set_isBufferFull)) bool  isBufferFull;

/// @brief Field positions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_positions, put=__cordl_internal_set_positions)) ::ArrayW<::UnityEngine::Vector3>  positions;

/// @brief Field times, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_times, put=__cordl_internal_set_times)) ::ArrayW<float_t>  times;

/// @brief Method GetSpeed, addr 0x180346ac0, size 0x100, virtual false, abstract: false, final false
inline float_t GetSpeed() ;

static inline ::GlobalNamespace::SpeedCalculator* New_ctor(int32_t  bufferSize) ;

/// @brief Method UpdatePosition, addr 0x180346bc0, size 0x80, virtual false, abstract: false, final false
inline void UpdatePosition(::UnityEngine::Vector3  position) ;

constexpr int32_t const& __cordl_internal_get_bufferSize() const;

constexpr int32_t& __cordl_internal_get_bufferSize() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr bool const& __cordl_internal_get_isBufferFull() const;

constexpr bool& __cordl_internal_get_isBufferFull() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_positions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_positions() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_times() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_times() ;

constexpr void __cordl_internal_set_bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_isBufferFull(bool  value) ;

constexpr void __cordl_internal_set_positions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_times(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x180346c40, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  bufferSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeedCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeedCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeedCalculator(SpeedCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeedCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeedCalculator(SpeedCalculator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4812};

/// @brief Field bufferSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ___bufferSize;

/// @brief Field positions, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___positions;

/// @brief Field times, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ___times;

/// @brief Field index, offset: 0x28, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field isBufferFull, offset: 0x2c, size: 0x1, def value: None
 bool  ___isBufferFull;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeedCalculator, ___bufferSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedCalculator, ___positions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedCalculator, ___times) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedCalculator, ___index) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedCalculator, ___isBufferFull) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeedCalculator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
