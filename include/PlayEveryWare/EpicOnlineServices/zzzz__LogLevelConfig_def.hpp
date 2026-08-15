#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/LogLevelConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__Config_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LogLevelConfig)
namespace PlayEveryWare::EpicOnlineServices {
class LogCategoryLevelPair;
}
namespace PlayEveryWare::EpicOnlineServices {
class LogLevelConfig___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class LogLevelConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class LogLevelConfig___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::LogLevelConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::LogLevelConfig*, "PlayEveryWare.EpicOnlineServices", "LogLevelConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*, "PlayEveryWare.EpicOnlineServices", "LogLevelConfig/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.LogLevelConfig/<>c
class CORDL_TYPE LogLevelConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x180548d10, size 0x40, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::LogLevelConfig* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogLevelConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogLevelConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LogLevelConfig___c(LogLevelConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogLevelConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogLevelConfig___c(LogLevelConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18845};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.Config
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.LogLevelConfig
class CORDL_TYPE LogLevelConfig : public ::PlayEveryWare::EpicOnlineServices::Config {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c;

/// @brief Field LogCategoryLevelPairs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_LogCategoryLevelPairs, put=__cordl_internal_set_LogCategoryLevelPairs)) ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>*  LogCategoryLevelPairs;

static inline ::PlayEveryWare::EpicOnlineServices::LogLevelConfig* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>* const& __cordl_internal_get_LogCategoryLevelPairs() const;

constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>*& __cordl_internal_get_LogCategoryLevelPairs() ;

constexpr void __cordl_internal_set_LogCategoryLevelPairs(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>*  value) ;

/// @brief Method .ctor, addr 0x1805413f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogLevelConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogLevelConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LogLevelConfig(LogLevelConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogLevelConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogLevelConfig(LogLevelConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18846};

/// @brief Field LogCategoryLevelPairs, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>*  ___LogCategoryLevelPairs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::LogLevelConfig, ___LogCategoryLevelPairs) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::LogLevelConfig) == 0x40, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
