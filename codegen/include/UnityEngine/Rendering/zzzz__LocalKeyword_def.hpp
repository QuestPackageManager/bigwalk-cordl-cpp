#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeyword.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalKeyword)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LocalKeyword);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LocalKeyword, "UnityEngine.Rendering", "LocalKeyword");
// Dependencies UnityEngine.Rendering.LocalKeywordSpace
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LocalKeyword
struct CORDL_TYPE LocalKeyword {
public:
// Declarations
 __declspec(property(get=get_isOverridable)) bool  isOverridable;

 __declspec(property(get=get_isValid)) bool  isValid;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>*() ;

/// @brief Method Equals, addr 0x1822ac9d0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x1822aca60, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::LocalKeyword  rhs) ;

/// @brief Method GetComputeShaderKeywordCount, addr 0x1822acac0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t GetComputeShaderKeywordCount(::UnityEngine::ComputeShader*  shader) ;

/// @brief Method GetComputeShaderKeywordCount_Injected, addr 0x1822acab0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetComputeShaderKeywordCount_Injected(::System::IntPtr  shader) ;

/// @brief Method GetComputeShaderKeywordIndex, addr 0x1822acaf0, size 0x130, virtual false, abstract: false, final false
static inline uint32_t GetComputeShaderKeywordIndex(::UnityEngine::ComputeShader*  shader, ::StringW  keyword) ;

/// @brief Method GetComputeShaderKeywordIndex_Injected, addr 0x1822acae0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetComputeShaderKeywordIndex_Injected(::System::IntPtr  shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method GetHashCode, addr 0x1822acc20, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetShaderKeywordCount, addr 0x1822acc70, size 0x20, virtual false, abstract: false, final false
static inline uint32_t GetShaderKeywordCount(::UnityEngine::Shader*  shader) ;

/// @brief Method GetShaderKeywordCount_Injected, addr 0x1822acc60, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetShaderKeywordCount_Injected(::System::IntPtr  shader) ;

/// @brief Method GetShaderKeywordIndex, addr 0x1822acca0, size 0x130, virtual false, abstract: false, final false
static inline uint32_t GetShaderKeywordIndex(::UnityEngine::Shader*  shader, ::StringW  keyword) ;

/// @brief Method GetShaderKeywordIndex_Injected, addr 0x1822acc90, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetShaderKeywordIndex_Injected(::System::IntPtr  shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method IsOverridable, addr 0x1822acde0, size 0x20, virtual false, abstract: false, final false
static inline bool IsOverridable(::UnityEngine::Rendering::LocalKeyword  kw) ;

/// @brief Method IsOverridable_Injected, addr 0x1822acdd0, size 0x10, virtual false, abstract: false, final false
static inline bool IsOverridable_Injected(::by_ref<::UnityEngine::Rendering::LocalKeyword>  kw) ;

/// @brief Method IsValid, addr 0x1822ace10, size 0x20, virtual false, abstract: false, final false
static inline bool IsValid(::UnityEngine::Rendering::LocalKeywordSpace  spaceInfo, uint32_t  keyword) ;

/// @brief Method IsValid_Injected, addr 0x1822ace00, size 0x10, virtual false, abstract: false, final false
static inline bool IsValid_Injected(::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>  spaceInfo, uint32_t  keyword) ;

/// @brief Method ToString, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1822ace30, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  shader, ::StringW  name) ;

/// @brief Method .ctor, addr 0x1822acf10, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Shader*  shader, ::StringW  name) ;

/// @brief Method get_isOverridable, addr 0x1822acff0, size 0x40, virtual false, abstract: false, final false
inline bool get_isOverridable() ;

/// @brief Method get_isValid, addr 0x1822ad030, size 0xc0, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>* i___System__IEquatable_1___UnityEngine__Rendering__LocalKeyword_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalKeyword() ;

// Ctor Parameters [CppParam { name: "m_SpaceInfo", ty: "::UnityEngine::Rendering::LocalKeywordSpace", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LocalKeyword(::UnityEngine::Rendering::LocalKeywordSpace  m_SpaceInfo, ::StringW  m_Name, uint32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11291};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_SpaceInfo, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::LocalKeywordSpace  m_SpaceInfo;

/// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_Name;

/// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LocalKeyword, m_SpaceInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LocalKeyword, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LocalKeyword, m_Index) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::LocalKeyword) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
