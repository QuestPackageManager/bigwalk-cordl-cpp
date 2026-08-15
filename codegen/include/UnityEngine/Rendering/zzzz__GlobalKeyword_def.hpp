#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GlobalKeyword.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalKeyword)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GlobalKeyword);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GlobalKeyword, "UnityEngine.Rendering", "GlobalKeyword");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GlobalKeyword
struct CORDL_TYPE GlobalKeyword {
public:
// Declarations
 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Method Create, addr 0x1822a9510, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GlobalKeyword Create(::StringW  name) ;

/// @brief Method CreateGlobalKeyword, addr 0x1822a9420, size 0xf0, virtual false, abstract: false, final false
static inline void CreateGlobalKeyword(::StringW  keyword) ;

/// @brief Method CreateGlobalKeyword_Injected, addr 0x1822a9410, size 0x10, virtual false, abstract: false, final false
static inline void CreateGlobalKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method GetGlobalKeywordCount, addr 0x1822a9590, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetGlobalKeywordCount() ;

/// @brief Method GetGlobalKeywordIndex, addr 0x1822a95b0, size 0x110, virtual false, abstract: false, final false
static inline uint32_t GetGlobalKeywordIndex(::StringW  keyword) ;

/// @brief Method GetGlobalKeywordIndex_Injected, addr 0x1822a95a0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetGlobalKeywordIndex_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method GetGlobalKeywordName, addr 0x1822a96d0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW GetGlobalKeywordName(uint32_t  keywordIndex) ;

/// @brief Method GetGlobalKeywordName_Injected, addr 0x1822a96c0, size 0x10, virtual false, abstract: false, final false
static inline void GetGlobalKeywordName_Injected(uint32_t  keywordIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method ToString, addr 0x1822a9760, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1822a9780, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_name, addr 0x1822a9760, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_name() ;

// Ctor Parameters []
// @brief default ctor
constexpr GlobalKeyword() ;

// Ctor Parameters [CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GlobalKeyword(uint32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GlobalKeyword, m_Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GlobalKeyword) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
