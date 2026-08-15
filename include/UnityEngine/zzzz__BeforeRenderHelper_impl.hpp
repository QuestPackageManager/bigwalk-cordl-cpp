#pragma once
// IWYU pragma private; include "UnityEngine/BeforeRenderHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BeforeRenderHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__BeforeRenderHelper_def.hpp"
// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "callback", ty: "::UnityEngine::Events::UnityAction*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::BeforeRenderHelper_OrderBlock::BeforeRenderHelper_OrderBlock(int32_t  order, ::UnityEngine::Events::UnityAction*  callback) noexcept  {
this->order = order;
this->callback = callback;
}
// Ctor Parameters []
constexpr ::UnityEngine::BeforeRenderHelper_OrderBlock::BeforeRenderHelper_OrderBlock()   {
}
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::BeforeRenderHelper::Invoke)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182240150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::BeforeRenderHelper::setStaticF_s_OrderBlocks(::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*, "s_OrderBlocks", ::UnityEngine::BeforeRenderHelper*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>* UnityEngine::BeforeRenderHelper::getStaticF_s_OrderBlocks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*, "s_OrderBlocks", ::UnityEngine::BeforeRenderHelper*>();
}
inline void UnityEngine::BeforeRenderHelper::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::BeforeRenderHelper::BeforeRenderHelper()   {
}
