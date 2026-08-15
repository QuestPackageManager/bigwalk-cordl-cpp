#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CopySessionHandleByUiEventIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopySessionHandleByUiEventIdOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleByUiEventIdOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleByUiEventIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptionsInternal, "Epic.OnlineServices.Sessions", "CopySessionHandleByUiEventIdOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.CopySessionHandleByUiEventIdOptionsInternal
struct CORDL_TYPE CopySessionHandleByUiEventIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d7a90, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__CopySessionHandleByUiEventIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopySessionHandleByUiEventIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr CopySessionHandleByUiEventIdOptionsInternal(int32_t  m_ApiVersion, uint64_t  m_UiEventId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UiEventId, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_UiEventId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptionsInternal, m_UiEventId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
