#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityWebRequestException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequestException)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Networking {
struct UnityWebRequest_Result;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UnityWebRequestException;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UnityWebRequestException*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityWebRequestException*, "Cysharp.Threading.Tasks", "UnityWebRequestException");
// Dependencies System.Exception, UnityEngine.Networking.UnityWebRequest::Result
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityWebRequestException
class CORDL_TYPE UnityWebRequestException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_ResponseCode)) int64_t  ResponseCode;

 __declspec(property(get=get_ResponseHeaders)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ResponseHeaders;

 __declspec(property(get=get_Result)) ::UnityEngine::Networking::UnityWebRequest_Result  Result;

 __declspec(property(get=get_Text)) ::StringW  Text;

 __declspec(property(get=get_UnityWebRequest)) ::UnityEngine::Networking::UnityWebRequest*  UnityWebRequest;

/// @brief Field <Error>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <ResponseCode>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResponseCode_k__BackingField, put=__cordl_internal_set__ResponseCode_k__BackingField)) int64_t  _ResponseCode_k__BackingField;

/// @brief Field <ResponseHeaders>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResponseHeaders_k__BackingField, put=__cordl_internal_set__ResponseHeaders_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _ResponseHeaders_k__BackingField;

/// @brief Field <Result>k__BackingField, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__Result_k__BackingField, put=__cordl_internal_set__Result_k__BackingField)) ::UnityEngine::Networking::UnityWebRequest_Result  _Result_k__BackingField;

/// @brief Field <Text>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Text_k__BackingField, put=__cordl_internal_set__Text_k__BackingField)) ::StringW  _Text_k__BackingField;

/// @brief Field <UnityWebRequest>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnityWebRequest_k__BackingField, put=__cordl_internal_set__UnityWebRequest_k__BackingField)) ::UnityEngine::Networking::UnityWebRequest*  _UnityWebRequest_k__BackingField;

/// @brief Field msg, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_msg, put=__cordl_internal_set_msg)) ::StringW  msg;

static inline ::Cysharp::Threading::Tasks::UnityWebRequestException* New_ctor(::UnityEngine::Networking::UnityWebRequest*  unityWebRequest) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__ResponseCode_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__ResponseCode_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__ResponseHeaders_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__ResponseHeaders_k__BackingField() ;

constexpr ::UnityEngine::Networking::UnityWebRequest_Result const& __cordl_internal_get__Result_k__BackingField() const;

constexpr ::UnityEngine::Networking::UnityWebRequest_Result& __cordl_internal_get__Result_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Text_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Text_k__BackingField() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__UnityWebRequest_k__BackingField() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__UnityWebRequest_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_msg() const;

constexpr ::StringW& __cordl_internal_get_msg() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ResponseCode_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__ResponseHeaders_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__Result_k__BackingField(::UnityEngine::Networking::UnityWebRequest_Result  value) ;

constexpr void __cordl_internal_set__Text_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UnityWebRequest_k__BackingField(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_msg(::StringW  value) ;

/// @brief Method .ctor, addr 0x181e88a60, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Networking::UnityWebRequest*  unityWebRequest) ;

/// @brief Method get_Error, addr 0x1802ec4d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Error() ;

/// @brief Method get_Message, addr 0x181e88b60, size 0xa0, virtual true, abstract: false, final false
inline ::StringW get_Message() ;

/// @brief Method get_ResponseCode, addr 0x180322760, size 0x10, virtual false, abstract: false, final false
inline int64_t get_ResponseCode() ;

/// @brief Method get_ResponseHeaders, addr 0x1803d9940, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_ResponseHeaders() ;

/// @brief Method get_Result, addr 0x1805d4740, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest_Result get_Result() ;

/// @brief Method get_Text, addr 0x180322750, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

/// @brief Method get_UnityWebRequest, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* get_UnityWebRequest() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestException(UnityWebRequestException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestException(UnityWebRequestException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14549};

/// @brief Field <UnityWebRequest>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____UnityWebRequest_k__BackingField;

/// @brief Field <Result>k__BackingField, offset: 0x98, size: 0x4, def value: None
 ::UnityEngine::Networking::UnityWebRequest_Result  ____Result_k__BackingField;

/// @brief Field <Error>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// @brief Field <Text>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ____Text_k__BackingField;

/// @brief Field <ResponseCode>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 int64_t  ____ResponseCode_k__BackingField;

/// @brief Field <ResponseHeaders>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____ResponseHeaders_k__BackingField;

/// @brief Field msg, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___msg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityWebRequestException, ____UnityWebRequest_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityWebRequestException, ____Result_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityWebRequestException, ____Error_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityWebRequestException, ____Text_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityWebRequestException, ____ResponseCode_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityWebRequestException, ____ResponseHeaders_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityWebRequestException, ___msg) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityWebRequestException) == 0xc8, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
