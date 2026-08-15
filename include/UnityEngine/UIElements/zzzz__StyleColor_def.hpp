#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleColor)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleColor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleColor);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleColor, "UnityEngine.UIElements", "StyleColor");
// Dependencies UnityEngine.Color, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleColor
struct CORDL_TYPE StyleColor {
public:
// Declarations
 __declspec(property(get=get_keyword, put=set_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

 __declspec(property(get=get_value, put=set_value)) ::UnityEngine::Color  value;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>*() ;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>*() ;

/// @brief Method Equals, addr 0x1823d6920, size 0xe0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1823d6880, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::StyleColor  other) ;

/// @brief Method GetHashCode, addr 0x1823d6a00, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1823d6a80, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1823d6af0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor, addr 0x1816995f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  v) ;

/// @brief Method .ctor, addr 0x180f9c070, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method get_keyword, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method get_value, addr 0x1823d6b30, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Color get_value() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>* i___System__IEquatable_1___UnityEngine__UIElements__StyleColor_() ;

/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__Color_() ;

/// @brief Method op_Equality, addr 0x1823d6b80, size 0x80, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleColor  lhs, ::UnityEngine::UIElements::StyleColor  rhs) ;

/// @brief Method op_Implicit, addr 0x1823d6c00, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleColor op_Implicit___UnityEngine__UIElements__StyleColor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Implicit, addr 0x1823d6c10, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleColor op_Implicit___UnityEngine__UIElements__StyleColor(::UnityEngine::Color  v) ;

/// @brief Method set_keyword, addr 0x180378ff0, size 0x10, virtual true, abstract: false, final true
inline void set_keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

/// @brief Method set_value, addr 0x1816995f0, size 0x10, virtual true, abstract: false, final true
inline void set_value(::UnityEngine::Color  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleColor() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleColor(::UnityEngine::Color  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_Value, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  m_Value;

/// @brief Field m_Keyword, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleColor, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleColor, m_Keyword) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleColor) == 0x14, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
