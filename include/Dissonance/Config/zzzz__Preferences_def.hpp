#pragma once
// IWYU pragma private; include "Dissonance/Config/Preferences.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Preferences)
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Dissonance::Config {
class Preferences;
}
// Write type traits
MARK_REF_T(::Dissonance::Config::Preferences*);
DEFINE_IL2CPP_CLASS(::Dissonance::Config::Preferences*, "Dissonance.Config", "Preferences");
// Dependencies System.Object
namespace Dissonance::Config {
// Is value type: false
// CS Name: Dissonance.Config.Preferences
class CORDL_TYPE Preferences : public ::System::Object {
public:
// Declarations
/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Get(::StringW  key, ::by_ref<T>  output, ::System::Func_3<::StringW,T,T>*  get, ::Dissonance::Log*  log) ;

/// @brief Method GetBool, addr 0x1805e7130, size 0x40, virtual false, abstract: false, final false
static inline bool GetBool(::StringW  key, bool  defaultValue) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(::StringW  key, ::by_ref<T>  field, T  value, ::System::Action_2<::StringW,T>*  save, ::Dissonance::Log*  log, ::System::Collections::Generic::IEqualityComparer_1<T>*  equality, bool  setAtRuntime) ;

/// @brief Method SetBool, addr 0x1805e7170, size 0x30, virtual false, abstract: false, final false
static inline void SetBool(::StringW  key, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Preferences() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Preferences", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Preferences(Preferences && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Preferences", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Preferences(Preferences const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16949};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Config::Preferences) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Config
