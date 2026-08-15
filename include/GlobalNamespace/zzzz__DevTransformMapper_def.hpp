#pragma once
// IWYU pragma private; include "GlobalNamespace/DevTransformMapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DevTransformMapper)
// Forward declare root types
namespace GlobalNamespace {
class DevTransformMapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevTransformMapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevTransformMapper*, "", "DevTransformMapper");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevTransformMapper
class CORDL_TYPE DevTransformMapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field applyBlenderOffset, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyBlenderOffset, put=__cordl_internal_set_applyBlenderOffset)) bool  applyBlenderOffset;

/// @brief Field from, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_from, put=__cordl_internal_set_from)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  from;

/// @brief Field to, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  to;

static inline ::GlobalNamespace::DevTransformMapper* New_ctor() ;

constexpr bool const& __cordl_internal_get_applyBlenderOffset() const;

constexpr bool& __cordl_internal_get_applyBlenderOffset() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_from() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_from() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_to() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_to() ;

constexpr void __cordl_internal_set_applyBlenderOffset(bool  value) ;

constexpr void __cordl_internal_set_from(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_to(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevTransformMapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevTransformMapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevTransformMapper(DevTransformMapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevTransformMapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevTransformMapper(DevTransformMapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4905};

/// @brief Field from, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___from;

/// @brief Field to, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___to;

/// @brief Field applyBlenderOffset, offset: 0x30, size: 0x1, def value: None
 bool  ___applyBlenderOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevTransformMapper, ___from) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevTransformMapper, ___to) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevTransformMapper, ___applyBlenderOffset) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevTransformMapper) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
