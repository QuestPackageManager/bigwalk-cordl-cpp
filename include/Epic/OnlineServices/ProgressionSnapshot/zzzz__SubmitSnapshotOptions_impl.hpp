#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/SubmitSnapshotOptions.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions.get_SnapshotId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions::*)()>(&::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions::get_SnapshotId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>(),
                        {"get_SnapshotId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions.set_SnapshotId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions::*)(uint32_t)>(&::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions::set_SnapshotId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>(),
                        {"set_SnapshotId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions::get_SnapshotId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>(),
                        {"get_SnapshotId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions::set_SnapshotId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>(),
                        {"set_SnapshotId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_SnapshotId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions::SubmitSnapshotOptions(uint32_t  _SnapshotId_k__BackingField) noexcept  {
this->_SnapshotId_k__BackingField = _SnapshotId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions::SubmitSnapshotOptions()   {
}
