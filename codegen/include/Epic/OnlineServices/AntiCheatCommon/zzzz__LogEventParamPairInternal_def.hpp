#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventParamPairInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairParamValueInternal_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogEventParamPairInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventParamPair;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventParamPairInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal, "Epic.OnlineServices.AntiCheatCommon", "LogEventParamPairInternal");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonEventParamType, Epic.OnlineServices.AntiCheatCommon.LogEventParamPairParamValueInternal
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogEventParamPairInternal
struct CORDL_TYPE LogEventParamPairInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x180524bc0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180524be0, size 0x130, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogEventParamPair_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogEventParamPairInternal() ;

// Ctor Parameters [CppParam { name: "m_ParamValueType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType", modifiers: "", def_value: None }, CppParam { name: "m_ParamValue", ty: "::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal", modifiers: "", def_value: None }]
constexpr LogEventParamPairInternal(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamValueType, ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal  m_ParamValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ParamValueType, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamValueType;

/// @brief Field m_ParamValue, offset: 0x8, size: 0x10, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal  m_ParamValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal, m_ParamValueType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal, m_ParamValue) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
