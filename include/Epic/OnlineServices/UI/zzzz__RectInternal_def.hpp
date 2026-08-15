#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/RectInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RectInternal)
namespace Epic::OnlineServices::UI {
struct Rect;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct RectInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::RectInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::RectInternal, "Epic.OnlineServices.UI", "RectInternal");
// Dependencies 
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.RectInternal
struct CORDL_TYPE RectInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e0b50, size 0x50, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::UI::Rect>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__Rect_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RectInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Width", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RectInternal(int32_t  m_ApiVersion, int32_t  m_X, int32_t  m_Y, uint32_t  m_Width, uint32_t  m_Height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7569};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_X, offset: 0x4, size: 0x4, def value: None
 int32_t  m_X;

/// @brief Field m_Y, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Y;

/// @brief Field m_Width, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_Width;

/// @brief Field m_Height, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_Height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::RectInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::RectInternal, m_X) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::RectInternal, m_Y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::RectInternal, m_Width) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::RectInternal, m_Height) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::RectInternal) == 0x14, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
