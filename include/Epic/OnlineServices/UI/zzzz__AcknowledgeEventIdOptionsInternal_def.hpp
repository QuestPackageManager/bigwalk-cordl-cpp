#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/AcknowledgeEventIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AcknowledgeEventIdOptionsInternal)
namespace Epic::OnlineServices::UI {
struct AcknowledgeEventIdOptions;
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
struct AcknowledgeEventIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal, "Epic.OnlineServices.UI", "AcknowledgeEventIdOptionsInternal");
// Dependencies Epic.OnlineServices.Result
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.AcknowledgeEventIdOptionsInternal
struct CORDL_TYPE AcknowledgeEventIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdb70, size 0x50, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__AcknowledgeEventIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AcknowledgeEventIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_Result", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }]
constexpr AcknowledgeEventIdOptionsInternal(int32_t  m_ApiVersion, uint64_t  m_UiEventId, ::Epic::OnlineServices::Result  m_Result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7502};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UiEventId, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_UiEventId;

/// @brief Field m_Result, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal, m_UiEventId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal, m_Result) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
