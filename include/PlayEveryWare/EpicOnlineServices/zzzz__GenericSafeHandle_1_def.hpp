#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/GenericSafeHandle_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
CORDL_MODULE_EXPORT(GenericSafeHandle_1)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class UnhandledExceptionEventArgs;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
template<typename HandleType>
class GenericSafeHandle_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1, "PlayEveryWare.EpicOnlineServices", "GenericSafeHandle`1");
// Dependencies System.Runtime.ConstrainedExecution.CriticalFinalizerObject
namespace PlayEveryWare::EpicOnlineServices {
// cpp template
template<typename HandleType>
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.GenericSafeHandle`1<HandleType>
class CORDL_TYPE GenericSafeHandle_1 : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief Field disposedValue, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposedValue, put=__cordl_internal_set_disposedValue)) bool  disposedValue;

/// @brief Field handleObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleObject, put=__cordl_internal_set_handleObject)) HandleType  handleObject;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CurrentDomain_UnhandledException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CurrentDomain_UnhandledException(::System::Object*  sender, ::System::UnhandledExceptionEventArgs*  e) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method IsValid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsValid() ;

static inline ::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>* New_ctor(HandleType  handle) ;

/// @brief Method ReleaseHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReleaseHandle() ;

constexpr bool const& __cordl_internal_get_disposedValue() const;

constexpr bool& __cordl_internal_get_disposedValue() ;

constexpr HandleType const& __cordl_internal_get_handleObject() const;

constexpr HandleType& __cordl_internal_get_handleObject() ;

constexpr void __cordl_internal_set_disposedValue(bool  value) ;

constexpr void __cordl_internal_set_handleObject(HandleType  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(HandleType  handle) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericSafeHandle_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericSafeHandle_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericSafeHandle_1(GenericSafeHandle_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericSafeHandle_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericSafeHandle_1(GenericSafeHandle_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18894};

/// @brief Field handleObject, offset: 0x10, size: 0x8, def value: None
 HandleType  ___handleObject;

/// @brief Field disposedValue, offset: 0x18, size: 0x1, def value: None
 bool  ___disposedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
