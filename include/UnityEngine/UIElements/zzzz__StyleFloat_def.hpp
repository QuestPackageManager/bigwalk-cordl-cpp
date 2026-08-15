#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleFloat)
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
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleFloat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleFloat);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleFloat, "UnityEngine.UIElements", "StyleFloat");
// Dependencies UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleFloat
struct CORDL_TYPE StyleFloat {
public:
// Declarations
 __declspec(property(get=get_keyword, put=set_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFloat>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleFloat>*() ;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<float_t>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<float_t>*() ;

/// @brief Method Equals, addr 0x1823d7a90, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1823d7b30, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::StyleFloat  other) ;

/// @brief Method GetHashCode, addr 0x1823d3210, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1823d7b70, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180e0c530, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor, addr 0x1823d7bb0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x180f9c010, size 0x60, virtual false, abstract: false, final false
inline void _ctor(float_t  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method get_keyword, addr 0x18038fe90, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method get_value, addr 0x1823d7bd0, size 0x20, virtual true, abstract: false, final true
inline float_t get_value() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFloat>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleFloat>* i___System__IEquatable_1___UnityEngine__UIElements__StyleFloat_() ;

/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<float_t>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<float_t>* i___UnityEngine__UIElements__IStyleValue_1_float_t_() ;

/// @brief Method op_Equality, addr 0x1823d7bf0, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleFloat  lhs, ::UnityEngine::UIElements::StyleFloat  rhs) ;

/// @brief Method op_Implicit, addr 0x180e0c950, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleFloat op_Implicit___UnityEngine__UIElements__StyleFloat(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Implicit, addr 0x1823d7c20, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleFloat op_Implicit___UnityEngine__UIElements__StyleFloat(float_t  v) ;

/// @brief Method set_keyword, addr 0x1803bda60, size 0x10, virtual true, abstract: false, final true
inline void set_keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

/// @brief Method set_value, addr 0x1823d7bb0, size 0x20, virtual true, abstract: false, final true
inline void set_value(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleFloat() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleFloat(float_t  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
 float_t  m_Value;

/// @brief Field m_Keyword, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleFloat, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleFloat, m_Keyword) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleFloat) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
