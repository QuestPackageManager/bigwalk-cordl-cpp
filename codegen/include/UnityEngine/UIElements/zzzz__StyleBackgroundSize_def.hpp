#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleBackgroundSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleBackgroundSize)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleBackgroundSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleBackgroundSize);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleBackgroundSize, "UnityEngine.UIElements", "StyleBackgroundSize");
// Dependencies UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleBackgroundSize
struct CORDL_TYPE StyleBackgroundSize {
public:
// Declarations
 __declspec(property(get=get_keyword, put=set_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

 __declspec(property(get=get_value, put=set_value)) ::UnityEngine::UIElements::BackgroundSize  value;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>*() ;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>*() ;

/// @brief Method Equals, addr 0x1823d6000, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1823d60c0, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::StyleBackgroundSize  other) ;

/// @brief Method GetHashCode, addr 0x1823d6160, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1823d6190, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1823d61e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor, addr 0x1823d6200, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::BackgroundSize  v) ;

/// @brief Method .ctor, addr 0x180a1a460, size 0x8b0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::BackgroundSize  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method get_keyword, addr 0x1803924b0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method get_value, addr 0x1823d6240, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::BackgroundSize get_value() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>* i___System__IEquatable_1___UnityEngine__UIElements__StyleBackgroundSize_() ;

/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__BackgroundSize_() ;

/// @brief Method op_Equality, addr 0x1823d62a0, size 0x50, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleBackgroundSize  lhs, ::UnityEngine::UIElements::StyleBackgroundSize  rhs) ;

/// @brief Method op_Implicit, addr 0x1823d6310, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleBackgroundSize op_Implicit___UnityEngine__UIElements__StyleBackgroundSize(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Implicit, addr 0x1823d62f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleBackgroundSize op_Implicit___UnityEngine__UIElements__StyleBackgroundSize(::UnityEngine::UIElements::BackgroundSize  v) ;

/// @brief Method set_keyword, addr 0x1803924c0, size 0x10, virtual true, abstract: false, final true
inline void set_keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

/// @brief Method set_value, addr 0x1823d6200, size 0x40, virtual true, abstract: false, final true
inline void set_value(::UnityEngine::UIElements::BackgroundSize  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleBackgroundSize() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleBackgroundSize(::UnityEngine::UIElements::BackgroundSize  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Value, offset: 0x0, size: 0x14, def value: None
 ::UnityEngine::UIElements::BackgroundSize  m_Value;

/// @brief Field m_Keyword, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleBackgroundSize, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleBackgroundSize, m_Keyword) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleBackgroundSize) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
