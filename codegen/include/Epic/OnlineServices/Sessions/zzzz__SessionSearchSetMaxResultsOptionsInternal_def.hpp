#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchSetMaxResultsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionSearchSetMaxResultsOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetMaxResultsOptions;
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
struct SessionSearchSetMaxResultsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptionsInternal, "Epic.OnlineServices.Sessions", "SessionSearchSetMaxResultsOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionSearchSetMaxResultsOptionsInternal
struct CORDL_TYPE SessionSearchSetMaxResultsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbe0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionSearchSetMaxResultsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchSetMaxResultsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxSearchResults", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SessionSearchSetMaxResultsOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_MaxSearchResults) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7850};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_MaxSearchResults, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_MaxSearchResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptionsInternal, m_MaxSearchResults) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
