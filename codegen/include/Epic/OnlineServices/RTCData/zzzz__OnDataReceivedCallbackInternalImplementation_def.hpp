#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/OnDataReceivedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnDataReceivedCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCData {
struct DataReceivedCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCData {
class OnDataReceivedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCData {
class OnDataReceivedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation*, "Epic.OnlineServices.RTCData", "OnDataReceivedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCData {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCData.OnDataReceivedCallbackInternalImplementation
class CORDL_TYPE OnDataReceivedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e8800, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e8870, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDataReceivedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDataReceivedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDataReceivedCallbackInternalImplementation(OnDataReceivedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDataReceivedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDataReceivedCallbackInternalImplementation(OnDataReceivedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7911};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
