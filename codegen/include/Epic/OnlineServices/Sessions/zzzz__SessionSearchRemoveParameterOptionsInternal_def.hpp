#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchRemoveParameterOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ComparisonOp_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionSearchRemoveParameterOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionSearchRemoveParameterOptions;
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
struct SessionSearchRemoveParameterOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptionsInternal, "Epic.OnlineServices.Sessions", "SessionSearchRemoveParameterOptionsInternal");
// Dependencies Epic.OnlineServices.ComparisonOp, System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionSearchRemoveParameterOptionsInternal
struct CORDL_TYPE SessionSearchRemoveParameterOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f3150, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionSearchRemoveParameterOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchRemoveParameterOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ComparisonOp", ty: "::Epic::OnlineServices::ComparisonOp", modifiers: "", def_value: None }]
constexpr SessionSearchRemoveParameterOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::Epic::OnlineServices::ComparisonOp  m_ComparisonOp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Key, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Key;

/// @brief Field m_ComparisonOp, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::ComparisonOp  m_ComparisonOp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptionsInternal, m_Key) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptionsInternal, m_ComparisonOp) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
