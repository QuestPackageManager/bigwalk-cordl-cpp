#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeywordSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalKeywordSpace)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LocalKeywordSpace);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LocalKeywordSpace, "UnityEngine.Rendering", "LocalKeywordSpace");
// Dependencies System.IntPtr
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LocalKeywordSpace
struct CORDL_TYPE LocalKeywordSpace {
public:
// Declarations
 __declspec(property(get=get_keywordCount)) uint32_t  keywordCount;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*() ;

/// @brief Method Equals, addr 0x1822ac740, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::LocalKeywordSpace  rhs) ;

/// @brief Method FindKeyword, addr 0x1822ac7b0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword FindKeyword(::StringW  name) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetKeyword, addr 0x1822ac830, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword GetKeyword(::StringW  name) ;

/// @brief Method GetKeywordCount, addr 0x1822ac800, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetKeywordCount() ;

/// @brief Method GetKeyword_Injected, addr 0x1822ac820, size 0x10, virtual false, abstract: false, final false
static inline void GetKeyword_Injected(::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  ret) ;

/// @brief Method get_keywordCount, addr 0x1822ac800, size 0x20, virtual false, abstract: false, final false
inline uint32_t get_keywordCount() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>* i___System__IEquatable_1___UnityEngine__Rendering__LocalKeywordSpace_() ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Rendering::LocalKeywordSpace  lhs, ::UnityEngine::Rendering::LocalKeywordSpace  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalKeywordSpace() ;

// Ctor Parameters [CppParam { name: "m_KeywordSpace", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LocalKeywordSpace(::System::IntPtr  m_KeywordSpace) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_KeywordSpace, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_KeywordSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LocalKeywordSpace, m_KeywordSpace) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::LocalKeywordSpace) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
