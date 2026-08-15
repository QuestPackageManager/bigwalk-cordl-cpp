#pragma once
// IWYU pragma private; include "Rewired/Utils/SafeAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/zzzz__SafeDelegate_1_def.hpp"
CORDL_MODULE_EXPORT(SafeAction)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils {
class SafeAction;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::SafeAction*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::SafeAction*, "Rewired.Utils", "SafeAction");
// Dependencies Rewired.Utils.SafeDelegate`1<T>
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.SafeAction
class CORDL_TYPE SafeAction : public ::Rewired::Utils::SafeDelegate_1<::System::Action*> {
public:
// Declarations
/// @brief Field dZBQBfASFMkNSqYankaYwedegnVf, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dZBQBfASFMkNSqYankaYwedegnVf, put=setStaticF_dZBQBfASFMkNSqYankaYwedegnVf)) ::System::Action_2<::System::Object*,::System::Action*>*  dZBQBfASFMkNSqYankaYwedegnVf;

/// @brief Method BaaDJmPfjUvoFUTmeCCYMNioTBrM, addr 0x18190d010, size 0x20, virtual false, abstract: false, final false
static inline void BaaDJmPfjUvoFUTmeCCYMNioTBrM(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::Action*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Clone, addr 0x18190d030, size 0x40, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method Invoke, addr 0x18190d070, size 0xf0, virtual false, abstract: false, final false
inline void Invoke() ;

static inline ::Rewired::Utils::SafeAction* New_ctor() ;

static inline ::Rewired::Utils::SafeAction* New_ctor(::Rewired::Utils::SafeAction*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::SafeAction* New_ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method XJoohkKipYYhpHTYiQZpKCqnTSlq, addr 0x18190d160, size 0x80, virtual false, abstract: false, final false
static inline ::System::Action_2<::System::Object*,::System::Action*>* XJoohkKipYYhpHTYiQZpKCqnTSlq() ;

/// @brief Method .ctor, addr 0x18190d1f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18190d200, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::SafeAction*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18190d1e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Action_2<::System::Object*,::System::Action*>* getStaticF_dZBQBfASFMkNSqYankaYwedegnVf() ;

/// @brief Method op_Addition, addr 0x18190d210, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction* op_Addition(::Rewired::Utils::SafeAction*  eventList, ::System::Action*  listener) ;

/// @brief Method op_Implicit, addr 0x18190d270, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction* op_Implicit___Rewired__Utils__SafeAction_(::System::Action*  obj) ;

/// @brief Method op_Implicit, addr 0x18190d2d0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action* op_Implicit___System__Action_(::Rewired::Utils::SafeAction*  obj) ;

/// @brief Method op_Subtraction, addr 0x18190d2f0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction* op_Subtraction(::Rewired::Utils::SafeAction*  eventList, ::System::Action*  listener) ;

static inline void setStaticF_dZBQBfASFMkNSqYankaYwedegnVf(::System::Action_2<::System::Object*,::System::Action*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeAction(SafeAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeAction(SafeAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2904};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::SafeAction) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils
