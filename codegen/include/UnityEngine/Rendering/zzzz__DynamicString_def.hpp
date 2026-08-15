#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicString)
// Forward declare root types
namespace UnityEngine::Rendering {
class DynamicString;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::DynamicString*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DynamicString*, "UnityEngine.Rendering", "DynamicString");
// Dependencies UnityEngine.Rendering.DynamicArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DynamicString
class CORDL_TYPE DynamicString : public ::UnityEngine::Rendering::DynamicArray_1<char16_t> {
public:
// Declarations
/// @brief Method Append, addr 0x181fefba0, size 0x90, virtual false, abstract: false, final false
inline void Append(::StringW  s) ;

/// @brief Method Append, addr 0x181fefb90, size 0x10, virtual false, abstract: false, final false
inline void Append(::UnityEngine::Rendering::DynamicString*  s) ;

static inline ::UnityEngine::Rendering::DynamicString* New_ctor() ;

static inline ::UnityEngine::Rendering::DynamicString* New_ctor(int32_t  capacity) ;

static inline ::UnityEngine::Rendering::DynamicString* New_ctor(::StringW  s) ;

/// @brief Method ToString, addr 0x181fefc30, size 0x30, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x181fefce0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181fefcf0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x181fefc60, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicString(DynamicString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicString(DynamicString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6717};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DynamicString) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
