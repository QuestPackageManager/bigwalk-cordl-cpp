#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ThreadedMessageQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadedMessageQueue_1)
namespace Rewired::Utils::Classes::Utility {
class ThreadHelper;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class ThreadedMessageQueue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Utility::ThreadedMessageQueue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Utility::ThreadedMessageQueue_1, "Rewired.Utils.Classes.Utility", "ThreadedMessageQueue`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.ThreadedMessageQueue`1<T>
class CORDL_TYPE ThreadedMessageQueue_1 : public ::System::Object {
public:
// Declarations
/// @brief Field AANonQwIhfKFYDDkKKGvvtFURKWX, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_AANonQwIhfKFYDDkKKGvvtFURKWX, put=__cordl_internal_set_AANonQwIhfKFYDDkKKGvvtFURKWX)) bool  AANonQwIhfKFYDDkKKGvvtFURKWX;

/// @brief Field GkjEwYbRblVeZMfeDnYYjYDpeDQgA, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_GkjEwYbRblVeZMfeDnYYjYDpeDQgA, put=__cordl_internal_set_GkjEwYbRblVeZMfeDnYYjYDpeDQgA)) int32_t  GkjEwYbRblVeZMfeDnYYjYDpeDQgA;

/// @brief Field IHcEpidHPAfIQSodwcQtyKxoICSm, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_IHcEpidHPAfIQSodwcQtyKxoICSm, put=__cordl_internal_set_IHcEpidHPAfIQSodwcQtyKxoICSm)) int32_t  IHcEpidHPAfIQSodwcQtyKxoICSm;

/// @brief Field IVvEXLKzhwmWdppkDucSRZPkluJn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_IVvEXLKzhwmWdppkDucSRZPkluJn, put=__cordl_internal_set_IVvEXLKzhwmWdppkDucSRZPkluJn)) ::System::Collections::Generic::Queue_1<T>*  IVvEXLKzhwmWdppkDucSRZPkluJn;

/// @brief Field MHSxIXNUPRdsTdDKCOqWYgVbvbHh, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_MHSxIXNUPRdsTdDKCOqWYgVbvbHh, put=__cordl_internal_set_MHSxIXNUPRdsTdDKCOqWYgVbvbHh)) bool  MHSxIXNUPRdsTdDKCOqWYgVbvbHh;

/// @brief Field OENUKVLJJbMOFKXAgGNCllDDtviu, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OENUKVLJJbMOFKXAgGNCllDDtviu, put=__cordl_internal_set_OENUKVLJJbMOFKXAgGNCllDDtviu)) ::System::Collections::Generic::Queue_1<T>*  OENUKVLJJbMOFKXAgGNCllDDtviu;

/// @brief Field UazhHYPhexWtHgHhAXEIIqbSsYSj, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_UazhHYPhexWtHgHhAXEIIqbSsYSj, put=__cordl_internal_set_UazhHYPhexWtHgHhAXEIIqbSsYSj)) bool  UazhHYPhexWtHgHhAXEIIqbSsYSj;

/// @brief Field WJLPDrVmwQnyTeoPGJhKbtPJSGIs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WJLPDrVmwQnyTeoPGJhKbtPJSGIs, put=__cordl_internal_set_WJLPDrVmwQnyTeoPGJhKbtPJSGIs)) ::Rewired::Utils::Classes::Utility::ThreadHelper*  WJLPDrVmwQnyTeoPGJhKbtPJSGIs;

/// @brief Field kfWeRPHlsVdDIgYCYKxvGWJpNQTsA, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_kfWeRPHlsVdDIgYCYKxvGWJpNQTsA, put=__cordl_internal_set_kfWeRPHlsVdDIgYCYKxvGWJpNQTsA)) bool  kfWeRPHlsVdDIgYCYKxvGWJpNQTsA;

/// @brief Field yvtceoEONvkjkzdCZoWXcZqnnSLbb, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_yvtceoEONvkjkzdCZoWXcZqnnSLbb, put=__cordl_internal_set_yvtceoEONvkjkzdCZoWXcZqnnSLbb)) int32_t  yvtceoEONvkjkzdCZoWXcZqnnSLbb;

/// @brief Field zBvDVtcRHSFDdsvsJJBOCHfLnmLX, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_zBvDVtcRHSFDdsvsJJBOCHfLnmLX, put=__cordl_internal_set_zBvDVtcRHSFDdsvsJJBOCHfLnmLX)) ::System::Action_1<T>*  zBvDVtcRHSFDdsvsJJBOCHfLnmLX;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  message) ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method HoijAebaoqQWIjrjHyYrbpZNLstI, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void HoijAebaoqQWIjrjHyYrbpZNLstI() ;

/// @brief Method JrukTtlnnQsKmxIFlycLcdsyPYBS, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void JrukTtlnnQsKmxIFlycLcdsyPYBS() ;

static inline ::Rewired::Utils::Classes::Utility::ThreadedMessageQueue_1<T>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method PRRxUYRYgWXdYonrZpdGSwaEhcqA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool PRRxUYRYgWXdYonrZpdGSwaEhcqA() ;

constexpr bool const& __cordl_internal_get_AANonQwIhfKFYDDkKKGvvtFURKWX() const;

constexpr bool& __cordl_internal_get_AANonQwIhfKFYDDkKKGvvtFURKWX() ;

constexpr int32_t const& __cordl_internal_get_GkjEwYbRblVeZMfeDnYYjYDpeDQgA() const;

constexpr int32_t& __cordl_internal_get_GkjEwYbRblVeZMfeDnYYjYDpeDQgA() ;

constexpr int32_t const& __cordl_internal_get_IHcEpidHPAfIQSodwcQtyKxoICSm() const;

constexpr int32_t& __cordl_internal_get_IHcEpidHPAfIQSodwcQtyKxoICSm() ;

constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get_IVvEXLKzhwmWdppkDucSRZPkluJn() const;

constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_IVvEXLKzhwmWdppkDucSRZPkluJn() ;

constexpr bool const& __cordl_internal_get_MHSxIXNUPRdsTdDKCOqWYgVbvbHh() const;

constexpr bool& __cordl_internal_get_MHSxIXNUPRdsTdDKCOqWYgVbvbHh() ;

constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get_OENUKVLJJbMOFKXAgGNCllDDtviu() const;

constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_OENUKVLJJbMOFKXAgGNCllDDtviu() ;

constexpr bool const& __cordl_internal_get_UazhHYPhexWtHgHhAXEIIqbSsYSj() const;

constexpr bool& __cordl_internal_get_UazhHYPhexWtHgHhAXEIIqbSsYSj() ;

constexpr ::Rewired::Utils::Classes::Utility::ThreadHelper* const& __cordl_internal_get_WJLPDrVmwQnyTeoPGJhKbtPJSGIs() const;

constexpr ::Rewired::Utils::Classes::Utility::ThreadHelper*& __cordl_internal_get_WJLPDrVmwQnyTeoPGJhKbtPJSGIs() ;

constexpr bool const& __cordl_internal_get_kfWeRPHlsVdDIgYCYKxvGWJpNQTsA() const;

constexpr bool& __cordl_internal_get_kfWeRPHlsVdDIgYCYKxvGWJpNQTsA() ;

constexpr int32_t const& __cordl_internal_get_yvtceoEONvkjkzdCZoWXcZqnnSLbb() const;

constexpr int32_t& __cordl_internal_get_yvtceoEONvkjkzdCZoWXcZqnnSLbb() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_zBvDVtcRHSFDdsvsJJBOCHfLnmLX() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_zBvDVtcRHSFDdsvsJJBOCHfLnmLX() ;

constexpr void __cordl_internal_set_AANonQwIhfKFYDDkKKGvvtFURKWX(bool  value) ;

constexpr void __cordl_internal_set_GkjEwYbRblVeZMfeDnYYjYDpeDQgA(int32_t  value) ;

constexpr void __cordl_internal_set_IHcEpidHPAfIQSodwcQtyKxoICSm(int32_t  value) ;

constexpr void __cordl_internal_set_IVvEXLKzhwmWdppkDucSRZPkluJn(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr void __cordl_internal_set_MHSxIXNUPRdsTdDKCOqWYgVbvbHh(bool  value) ;

constexpr void __cordl_internal_set_OENUKVLJJbMOFKXAgGNCllDDtviu(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr void __cordl_internal_set_UazhHYPhexWtHgHhAXEIIqbSsYSj(bool  value) ;

constexpr void __cordl_internal_set_WJLPDrVmwQnyTeoPGJhKbtPJSGIs(::Rewired::Utils::Classes::Utility::ThreadHelper*  value) ;

constexpr void __cordl_internal_set_kfWeRPHlsVdDIgYCYKxvGWJpNQTsA(bool  value) ;

constexpr void __cordl_internal_set_yvtceoEONvkjkzdCZoWXcZqnnSLbb(int32_t  value) ;

constexpr void __cordl_internal_set_zBvDVtcRHSFDdsvsJJBOCHfLnmLX(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method xstwXnUNQoyVCaGfdNDQjDSeFQXL, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool xstwXnUNQoyVCaGfdNDQjDSeFQXL() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadedMessageQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadedMessageQueue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadedMessageQueue_1(ThreadedMessageQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadedMessageQueue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadedMessageQueue_1(ThreadedMessageQueue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2977};

/// @brief Field IHcEpidHPAfIQSodwcQtyKxoICSm, offset: 0x10, size: 0x4, def value: None
 int32_t  ___IHcEpidHPAfIQSodwcQtyKxoICSm;

/// @brief Field GkjEwYbRblVeZMfeDnYYjYDpeDQgA, offset: 0x14, size: 0x4, def value: None
 int32_t  ___GkjEwYbRblVeZMfeDnYYjYDpeDQgA;

/// @brief Field yvtceoEONvkjkzdCZoWXcZqnnSLbb, offset: 0x18, size: 0x4, def value: None
 int32_t  ___yvtceoEONvkjkzdCZoWXcZqnnSLbb;

/// @brief Field UazhHYPhexWtHgHhAXEIIqbSsYSj, offset: 0x1c, size: 0x1, def value: None
 bool  ___UazhHYPhexWtHgHhAXEIIqbSsYSj;

/// @brief Field WJLPDrVmwQnyTeoPGJhKbtPJSGIs, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ThreadHelper*  ___WJLPDrVmwQnyTeoPGJhKbtPJSGIs;

/// @brief Field OENUKVLJJbMOFKXAgGNCllDDtviu, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  ___OENUKVLJJbMOFKXAgGNCllDDtviu;

/// @brief Field IVvEXLKzhwmWdppkDucSRZPkluJn, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  ___IVvEXLKzhwmWdppkDucSRZPkluJn;

/// @brief Field AANonQwIhfKFYDDkKKGvvtFURKWX, offset: 0x38, size: 0x1, def value: None
 bool  ___AANonQwIhfKFYDDkKKGvvtFURKWX;

/// @brief Field MHSxIXNUPRdsTdDKCOqWYgVbvbHh, offset: 0x39, size: 0x1, def value: None
 bool  ___MHSxIXNUPRdsTdDKCOqWYgVbvbHh;

/// @brief Field zBvDVtcRHSFDdsvsJJBOCHfLnmLX, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<T>*  ___zBvDVtcRHSFDdsvsJJBOCHfLnmLX;

/// @brief Field kfWeRPHlsVdDIgYCYKxvGWJpNQTsA, offset: 0x48, size: 0x1, def value: None
 bool  ___kfWeRPHlsVdDIgYCYKxvGWJpNQTsA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility
